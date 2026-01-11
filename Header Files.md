# Header Files

[Video being studied](https://www.youtube.com/watch?v=9RJTQmK0YPI&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=10) <--

- **Header Files** - Generally are used to declare certain type of functions and data types, so they can be used throughout the program. It's a place to store declarations for functions, not the definitions, but a place that says that a function exists.

    - **Example:**

        <span style="color:lightblue"> **Log.c** </span>

        ```cpp
        void Log(const char* message)
        {
            std::cout << message << std::endl
        }
        ```

        <span style="color:lightblue"> **Log.h** </span>
        
        ```cpp
        #pragma once

        void Log(const char* message);
        ```

        <span style="color:lightblue"> **Main.c** </span>
        
        ```cpp
        #include "Log.h"

        int main ()
        {
            Log("Hello World");
            std::cin.get()
        }
        ```


        - By using the <span style="color:lightblue"> **header files** </span>, we can have the functions and other items declared there and instead of copying this declarations everywhere, we just need to include the header. 

        - **"pragma once"** - it's a preprocessor command that basically says to the compiler to include this file only once, it prevents to include a header file multiple times in the **same translation unit**.

        - **"#ifndef"** – Similar to **"#pragma once"**, this is the traditional way to avoid multiple inclusion of a header file, **for example:**

            <span style="color:lightblue"> **Log.c** </span>

            ```cpp
            #ifndef _LOG_H
            #define _LOG_H

            void Log(const char* message)
            {
                std::cout << message << std::endl
            }

            #endif
            ```

- **Include Statments with:**

    - **' <> '** - angular brakets are used for header files located in the compiler's standart system include directories, like <span style="color:lightblue"> **/usr/include** </span>.

    - **' "" '** - quotes indicate that the header file should be searched for first in the current <span style="color:lightblue"> **project directory** </span>, and then in the compiler's standard system include directories if it is not found locally.

- Header files in **C** usually have the extension <span style="color:lightblue"> **.h** </span>, while in **C++** they may use <span style="color:lightblue"> **.h** </span>, <span style="color:lightblue"> **.hpp** </span>, or no specific extension at all




    
