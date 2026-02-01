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