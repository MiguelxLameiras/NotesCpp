# Arrays

[Video being studied](https://www.youtube.com/watch?v=ENDaJi08jCU&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=30)

- **Arrays** - it's a way to represent a collection of variables usaually of the same type, in a row. They are useful because if we need a group of variables, we don't need to initialize each one individually.

    - **Example:**

    ```cpp
        int main()
        {
            int example[5];   //here we allocated memory for 5 integers

            int* ptr = example; //array is just a pointer
                             
            example[0] = 1; // Array indexes refer to each element of the array. They go from 0 to 4, starting 

            std::cout<<example[0] << std::endl; // returns 1

            for(int i=0; i<5; i++){
                example[i] = i+1;
            }

            *(ptr +2) = 6;  //same as doing example[2]=6 
            *(int*)*((char*)ptr + 8) = 8 // is also equal because type char is 1 byte and int is 4
        }

    ```

- Using the heap can reduce performance because memory may be scattered **(memory fragmentation and cache misses)**, may require additional memory jumps due to pointer indirection, and requires dynamic allocation, while the stack is faster since it stores data contiguously and is managed automatically.

    ```cpp
        int main()
        {
            
            int example[5]; //uses a stack, will be alive till it get out of scope
            for(int i=0; i<5; i++)
            {
                example[i] = 2;
            }

            int * another = new int[5]; //uses a heap, it will be alive until it's deleted
            for(int i=0; i<5; i++)
            {
                example[i] = 2;
            }
            
            delete[] another;
        }
    ```

- **Array Size** - he size of a fixed array on the stack can be obtained with `sizeof(a)/sizeof(int)`

    - **Example:**
    ```cpp
        ...
        int a[5];
        int count = sizeof(a)/sizeof(int); // count = 5
        ...
    ```
    - **Note** - For fixed size arrays, we can only be aware of the size we defined.

- In C++11 or higher , it is better to use `std::array`.

    - **Example:**
    ```cpp
        #include <array>
        ...
        std::array<int,5> another;
        count n = another.size(); // count = 5
        ...
    ```


