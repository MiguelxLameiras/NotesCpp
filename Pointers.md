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