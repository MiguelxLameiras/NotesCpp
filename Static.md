# Static

[Video being studied](https://www.youtube.com/watch?v=f3FVU-iwNuA&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=21)

- Static keyword has two meanings depending if it's outside or inside of a class.

    - If it's outside of a class, then it means that variable or method with the static keyword is only visible inside that translation unit.

    - When it's used inside a class, it means that the member belongs to the class itself rather than to individual instances. Therefore, the same variable is shared by all instances of the class. This can be used for example, to generate unique IDs for a group of products.


- **Static outside of a class** - If we have `static int variable = 5;`, then it means this variable is only linked internally, therefore the linker will only look for linkages to this variable in that **.cpp** file.        

    - **Note** - Without the static keyword, if another variable or method with the same name exists in a different translation unit, a **duplication linkage error** appears. 

- **Static for Classes and Structs** - If a **static** keyword is used inside a classe, in a variabele it means that instance of that variable is gonna be used in all instances of the class, so if one instance changes it, the rest will change as well.
    In static methods, it can be called without a class instance, therefore we do not get acess to a instance of that class. With this, it is not possible to write code in a static method with reference to class variables or another methods which are public, because it hasn't a instance to refer, however they cas acess another static methods.

- **Examples:**

    **1.**

    ```cpp
        #include <iostream>

    struct Entity{

        static int x, y;

        void Print(){
            std::cout << x << "," << y << std::endl;
        }
    }
    //this allows to acess a static variable or method in a class, basically it means ''access this variable in this class''
    int Entity::x;
    int Entity::y;

    int main(){

        Entity e;

        e.x = 2;
        e.y = 3;

        Entity e1;
     // Entity e1 = { 5, 8}, this will get a error, because x and y are no longer class members.
        e.x = 5;
        e.y = 8;

        e.Print();  //this will print (5,8)
        e1.Print(); //this will print (5,8)

    }
    ```
    **2.**