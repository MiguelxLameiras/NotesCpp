# Pointers

[Video being studied](https://www.youtube.com/watch?v=DTxHyVn0ODg&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=16) <--

- **Pointer** - at the hardware level, is always represented as an integer, a memory address, regardless of the type of data stored at that address. 

    - **Example 1:**
        ```cpp
        int var = 8;    // Created on the stack
        int* ptr = &var;
        *ptr = 10;      // Dereferencing a pointer and writing on it
        std::cout<< var << std::endl;
        ```
        
    - **Example 2:**
      ```cpp
      char * buffer = new char[8];    // Allocates 8 bits of memory
        memset(buffer, 0, 8);   // Fills buffer with 0
        char ** ptr = &buffer;  // Double pointer (pointer to a pointer)
        delete[] buffer;
      ```

# References

[Video being studied](https://www.youtube.com/watch?v=IzoFn3dfsPA&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=17) <--

- **References** - it's a way to refer to an existing variable. Unlike pointers, a new reference is never created. They do not occupy separate memory or storage, they simply refer to an already existing object.

    - **Example 1:**
        ```cpp
        int main(){
            int a = 5;
            int& ref = a; //a reference must always have a target, here it refers to a

            ref = 2;

            std::cout << a << std::endl; // will write 2
        }
        ```
    - **Example 2:**
        ```cpp
        void increment (int& value){
            value++; 
        }

        int main(){
            int a = 5;

            increment(a);

            std::cout << a << std::endl; // will write 6
        }
        ```

        - **Note** - If it was with pointers, the code would be like this, `void increment (int& value)` --> `void increment (int* value)`, `value++;` --> `(*value)++;` and `increment(a)` --> `increment(&a)`

# Classes

[Video being studied](https://www.youtube.com/watch?v=2BP8NhxjrO0&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=18)
 <--
- **Classes** - A data types that contain both attributes and methods, this allows for improved code organization and the way the system is maintained.

    - **Example:**
    ```cpp
    class Player{
        public: //This allows for attributes and methods to be used outside of the class

            int x,y;
            int speed;

            void Move(int xa, int ya){
                x += xa * player.speed;
                y += ya * player.speed;

    }
    
    int main(){
        Player player;
        player.Move(1, -1);
    }


    }
    ```

- **Structs** - Almost the same as classes, the main difference is visibility. Struct members are public by default, while classes are private, you can use **public:** and **private:** to change that.

    - **Example:**
    ```cpp
    struct Player{
        private: //This allows for attributes and methods to be used only in the struct itself

            int x,y;
            int speed;

            void Move(int xa, int ya){
                x += xa * player.speed;
                y += ya * player.speed;

    }
    
    int main(){
        Player player;
        player.Move(1, -1);
    }


    }
    ```

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

# Enums

[Video being studied](https://www.youtube.com/watch?v=x55jfOd5PEE&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=23)

- **Enums** - it creats a new type which contains integers with a named attached to it. By default, if no values are specified, the enumeration starts at 0 and each following value is incremented by 1, but if the first value is set the rest will incrment thay certain value by 1, for example, `enum example{ a =1, b};`, b will be two, however it's a good practice to set all values.
    By default, enum types are integers but we can specife it to **char** for example, as long it's in integer limits.

- **Enum Classes**

    - **Example:**

    ```cpp
    enum class example1 {
        vermelho, preto
    };

    enum class example2 {
        vermelho, preto
    };
    ```

    -  Enum classes are preferred as it avoids accidental implicit conversions to integers, by refering the scoup of the variable, in the example we can refer to the two different ""vermelho"" by writting, `example1 x = example1::vermelho` or `example2 x = example2::vermelho`, enhancing type safety.

# Constructors

[Video being studied](https://www.youtube.com/watch?v=FXhALMsHwEY&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=24)

- **Constructors** - it is a special method that is called when an object or a class instance is created. It is useful in C++ to ensure that objects are properly initialized before they're used, preventing errors and improving code reliability.
    To define it, it is written with the same name as the class.

    - **Example:**

        ```cpp


            class Entity()
            {
                public:
                    float X,Y;

                    // A class can have multiple constructors with different parameter (constructor overloading)
                    // But if a constructor isn't define, the compiler provides a default contructor
                    Entity(float x, float y) 
                    {
                        X = x;
                        Y = y;
                        //It doesn't have a return type
                    }

                    void Print(){
                        std::cout << X << "," << Y << std::endl;
                    }

            }

            int main()
            {
                Entity e(10.0f, 10.0f);
                e.Print()
                std::cin.get();
            }
        ``` 

# Destructor

[Video being studied](https://www.youtube.com/watch?v=D8cWquReFqw&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=25)

- **Destructor** - it is a special method that is called when an object or a class instance is destroyed. It is useful in C++ to release memory, deinitialize resources, and prevent memory leaks.
    To define it, it is written with the same name as the class but with a **"~"** before the name.

    - **Example:**

        ```cpp
            class Entity
            {
                public:

                    float X, Y;

                    Entity()
                    {
                        X = 0.0f;
                        Y = 0.0f:

                        std::cout << "A entity as benn created." << std::endl;
                    }

                    ~Entity() //Destructors don't take any arguments or return types
                    {
                        std::cout << "A entity as benn destroyed." << std::endl;
                    }       
            }

            void Funtion()
            {
                 // When the entity goes out of scope it gets automatically destroyed, but we can destroy a instance manually byt using "e.~entity();"
                Entity e;
                e.Print()
            }

            int main()
            {
                 Function();
                std::cin.get();
            }
        ``` 

        - **Destructor invocation** - This happens when a object goes out of scope, an object is explicity deleted by using **delete** or in this case `e.~entity();`, also when a program terminates.

        - **Note** - Destructors are called by order **LIFO** (Last-In First-Out).

# Inheritance

[Video being studied](https://www.youtube.com/watch?v=X8nYM8wdNRE&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=26)

- **Inheritance** - it allows to branch off a base class and create sub-classes, or in another words, the code will have a hierarchy of classes which ralate to each other. It helps to prevent code duplication, because instead of repeating code over and over again, we can put all of our common funtionality between classes into a parent class.

    ```cpp
    class Entity
    {
        public:
            float X,Y;
    
        void Move(float xa, float ya)
        {
            X += xa;
            Y += ya;
        }
    }; 

    class Player : public Entity
    {
        public:
            const char* Name;

            void PrintName()
            {
                std::cout << Name << std::endl;
            }

    };

    int main()
    {
        Player player;
        player.Move(5,5);
        player.X = 2; //All instances of player will have the entity atributes (X,Y and method Move)
        std::cin.get();
    }
    ```

# Virtual Functions

[Video being studied](https://www.youtube.com/watch?v=oIV2KchSyGQ&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=27) <--

- **Polymorphism** – is the ability of a single function or object to behave differently depending on the actual type of the object. In object-oriented programming, this allows a base class pointer or reference to dynamically call the method of a derived class.

- **Virtual Funtions** - allow us to overwrite methods within subclasses. If B is a subclass of A and we create a method in class a and declare it as virtual, we have the option to overwrite that method in B to use it differently.

- Without virtual functions, **polymorphism does not occur**.The function call is resolved at **compile time** based on the type of the pointer or reference, not the actual object type.

    - **Example:**
    ```cpp
        class Entity
        {
            public:
               std::string GetName() { return "Entity";}
        }; 

        class Player : public Entity
        {
            private:
                std::string m_Name;
            public:
                Player(const std::string& name)
                    : m_Name(name) {}
                
                std::string GetName() { return m_Name; }

        };

        int main()
        {
            Entity* e = new Entity();
            std::cout << e->GetName() << std:endl; // Returns Entity

            Player* p = new Player("Miguel");
            std::cout << p->GetName() << std::endl; // Returns Miguel

            Entity* entity = p;
            std::cout << entity->GetNme() << std:endl; // Returns Entity

            std::cin.get();
        }
    ```

- This can be fixed using a **V-Table**. It stores pointers to the class’s virtual functions. When a virtual function is called, the program looks up the V-Table to determine the actual type of the object.
    The **virtual** keyword enables this mechanism, while **override** indicates that a subclass provides its own implementation for that virtual function.

    - **Example:**
    ```cpp
        class Entity
        {
            public:
               virtual std::string GetName() { return "Entity";}
        }; 

        class Player : public Entity
        {
            private:
                std::string m_Name;
            public:
                Player(const std::string& name)
                    : m_Name(name) {}
                
                std::string GetName() override { return m_Name; }

        };

        int main()
        {
            Entity* e = new Entity();
            std::cout << e->GetName() << std:endl; // Returns Entity

            Player* p = new Player("Miguel");
            std::cout << p->GetName() << std::endl; // Returns Miguel

            Entity* entity = p;
            std::cout << entity->GetNme() << std:endl; // Returns Miguel

            std::cin.get();
        }
    ```
    - **Note** - We don’t actually need the **override** keyword, but it improves code readability and helps prevent bugs.
    Also, we can only override virtual methods that already exist in the base class.

# Interfaces

[Video being studied](https://www.youtube.com/watch?v=UWAdd13EfM8&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=28)

- **Interfaces** - it's a specific type of virtual funtion, **pure virtual function**. Is basacilly the same as an abstract methoad or an interface in **C#** or **Java**, it allow us to define in a base class that not have an implementation and then forces subclasses to actually implement that funtion.

    - **Example:** 
    ```cpp
    class Entity
    {
        public:
            virtual std::string GetName() = 0;  //This makes the method pure virtual.
    }

    class Player : public Entity
    {
        private:
            std::string m_Name;
        public:
            Player(const std::string& name) : m_Name(name) {}

            std::string GetName() override { return m_Name; }
    }

    int main()
    {
        // Entity* e = new Entity() is no more possible
        Entity* e = new Player("");
        std::cout << e->GetName() << std::endl; //Entity

        Player* p = new Player("Miguel");
        std::cout << p->GetName() << std::endl; // Miguel

        Entity* entity = p;
        std::cout << entity->GetName() << std::endl; //Miguel
    }
    ```

    - **Note** - it's not possible to directly instantiate a class with only pure virtual methods.

    - Every sub-class needs to have the pure virtual methods, otherwise it will be not possible to instantiate it.

    - **Example:**
    ```cpp
    class Printable
    {
        public:
            virtual std::string GetClassName() = 0;
    }

    class Entity : public Printable
    {
        public:
            virtual std::string GetName() {return "Entity";}
            std::string GetClassName() override { return "Entity"; } 
    }

    class Player : public Entity
    {
        private:
            std::string m_Name;
        public:
            Player(const std::string& name) : m_Name(name) {}

            std::string GetName() override { return m_Name; }
            std::string GetClassName() override { return "Player"; }
    }

    void PrintName(Entity* entity)
    {
        std::cout << entity->GetName() << std::endl;
    }

    void Print( Printable obj)
    {
        std::cout << obj->GetClassName() << std::endl;
    }

    int main()
    {
        Entity* e = new Entity();
        Print(e); //Returns Entity

        Player* p = new Player("Miguel");
        Print(p); //Returns Player
    }
    ```          