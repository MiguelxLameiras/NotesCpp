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