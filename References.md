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