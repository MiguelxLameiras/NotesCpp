# Control Flow

[Video being studied](https://www.youtube.com/watch?v=a3IZ8WaIFAA&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=15) <--

 - **Control Flow Statments** - they work with loops, this type os statments gives more control over them. 

- **"continue"** - can be used only inside a loop, it basically says to the progam to pass tot he next interaction of the loop

    - **Example:**

        ```cpp

        for(int i = 0; i < 5; ++i) {

            if(i % 2 == 0) {
                continue; 
            }

            std::cout << "Hello World!" << std::endl;
        }

        ```

        - With this, it will only print the message two times.

- **break** - is mainly used in loops, but it can also be used in switch statementsl, it's used to terminate a loop.

    - **Example:**

        ```cpp

        for(int i = 0; i < 5; ++i) {

            if(i == 2) {
                break; 
            }

            std::cout << "Hello World!" << std::endl;
        }

        ```
        - It will only print the message once.


- **return** - is used to exit a function and optionally return a value, depending on the function’s return type. If the function has type void, return does not need to return a value and can even be omitted.

    - **Example:**

        ```cpp

        int soma(int a, int b) {
            return a + b;  
        }

        ```

