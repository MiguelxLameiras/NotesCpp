# Introduction

[Video being studied](https://www.youtube.com/watch?v=SfGuIVzE_Os&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=5) <--

- **Preprocessor statement** - Everything that starts with the <span style="color:lightblue"> **"#"** </span>symbol is a preprocessor operator, the first thing the compiler does when it receives a source file is to process all the preprocessor operators before compiling the code.

   - **Ex:** <span style="color:lightblue"> **"#include"** </span> will look for a file, for example <span style="color:lightblue"> **"iostream"** </span>, take all the contents of that file and insert it in the code, the files that we include are usually header files.

- **Entry Point** - The <span style="color:lightblue"> **"main()"** </span> function is the entry point to a program, being a special case where nothing has to be returned despite being stated with <span style="color:lightblue"> **"int"** </span>, but for default the function returns **0** when it's terminated, this **ONLY APPLIES** for the main function.

- <span style="color:lightblue"> **"<<"** </span>, are an overloaded operators. Operators are just functions, for example, `std::cout << "hello" << std::endl;` could just be `std::cout.print("hello").print(std::endl);`.

    **Note:** <span style="color:lightblue"> **"cout"** </span> function, it's used to print the strings to the console on the screen, meanwhile <span style="color:lightblue"> **"endl"** </span> function moves to a new line and <span style="color:lightblue">**"cin.get()"**</span> function reads a single character from the standard input , normally the keyboard, including spaces and Enter.

- **Solution Configuration** - It can be <span style="color:lightblue"> **Debug** </span> or <span style="color:lightblue"> **Release** </span>, which are sets of rules that are applied when building a project.

    - **Debug**: Used during the development phase to help developers debug and test the program, basically it's slower because it's not optimized but it's easier to inspect the code.

    - **Release**: Used for the final version of the program, intended for distribution or production, it's optimazed, so it runs faster, but it's harder to inspect and debug.

- **Solution Platform** - It can be <span style="color:lightblue"> **"x86"** </span> or <span style="color:lightblue"> **"x64"** </span>, which indicates the platform targeted in the current compilation, like **Windows 32-bit or 64-bit**.
    
- **Linker** - When we have several <span style="color:lightblue"> **".cpp"** </span> files, where they are compiled individually into a object file. This is where the **Linker** comes in, it glues all object files into a <span style="color:lightblue"> **".exe"** </span>.
    
    **Note:** only **.cpp** files get compiled, if a header gets included into a .cpp file at the preprocessing stage, its contents will be compiled as part of the .cpp file.

- **Declaration** - Statement that tells the compiler that a certain function exists.
     
    - **Ex:** `void Log(const char* message);`, normally located at the header.

- **Definition** - This is the function body, the actual logic of the code.
    
    - **Ex:** `void Log(const char* message) {std::count << message << std:endl;}`
            
            
# Compiler

[Video being studied](https://www.youtube.com/watch?v=3tIqpEmWMLI&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=6) <--


   
- **C++ Compilation**

| Step | Description | Mandatory? | Notes |
|------|--------------|-------------|-------|
| 1. Source Code | What the programmer writes (`.cpp`, `.h`). | ✅ Yes | |
| 2. Preprocessor | Expands `#include`, `#define`, etc. | ✅ Yes | |
| 3. Tokenizing and Parsing | Converts source code into tokens and builds the AST | ✅ Yes |
| 4. AST (Abstract Syntax Tree) | Represents the program’s logical structure. | ✅ Yes | |
| 5. IR (Intermediate Representation) | Intermediate form for optimizations. | ⚙️ Optional | Used by modern compilers (LLVM, GCC). |
| 6. Assembly (text) | Human-readable CPU instructions. | ⚙️ Optional | Can be skipped if compiled directly to machine code. |
| 7. Object Code (.o) | Binary machine code (not yet linked). | ✅ Yes |  |


- **Preprocesses**
    - **"#include"** - copies and pastes the included file into the source code.
    - **"#define"** - defines a macro, every occurence of the defined identifier is raplaced by its value.
        - **Ex:** In <span style="color:lightblue"> **#define INTEGER cherno** </span>, every <span style="color:lightblue"> **INTEGER** </span> in the code will be replaced with <span style="color:lightblue"> **cherno** </span>.
    - **"#if" and "#endif"** - check conditions during preprocessing; they allow the compiler to include or ignore parts of the code before compilation.

- **Translation Unit** - Is the source file after <span style="color:lightblue"> **preprocessing** </span>, that is, the original <span style="color:lightblue"> **.cpp** </span> file with all included headers and macros expanded, can be represented with file <span style="color:lightblue"> **.i** </span>.

- **Object File** is a binary file. With Visual Studio, we can select throught the <span style="color:lightblue"> **Preprocessor** </span> options to generate a **Translation Unit**, and from the <span style="color:lightblue"> **Output Files** </span> an Assembly file of the compiled object file.

- **Optimization** - We can also change compilation optimizations for speed, space, etc.
    - **Ex:** It can simplify the machine instrucions, instead of doing <span style="color:lightblue"> **5 x 2** </span>, just places directly <span style="color:lightblue"> **10** </span>in memory.

# Linker

[Video being studied](https://www.youtube.com/watch?v=H4s55GgAg0I&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=7) <--

- **Linking Phase** - After compiling every **.cpp** into a object file (**.obj** or **.o**). The <span style="color:lightblue"> **Linker** </span> combines all of them into a single <span style="color:lightblue"> **"executable or library** </span>, connecting function calls and variable references across files to form one unified program.

- **Symbols** - **Functions** and **Global Variables** becomes <span style="color:lightblue"> **symbols** </span>. The linker matches where they are declared with where they are defined.

- **Unresolved Symbols** - If a function is declared, for example in a **header**, but not defined anywhere, or if its object file isn't linked, you'll get an <span style="color:lightblue"> **unresolved external symbol** </span> error.

- **Internal / External Linkage**
    - **Static or unnamed namespace <span style="color:lightblue"> **"→"** </span> symbol** - is only visible inside that file, <span style="color:lightblue"> **internal linkage** </span>.
    - **Normal global definitions** - visible to other files, <span style="color:lightblue"> **external linkage** </span>.
 
 - **Static / Dynamic Libraries** 
    -   **Static (.lib / .a)** - merged into the program at compile time.
    -   **Dynamic (.dll/.so)** - linked at runtime, only references are stored.

- **Linking Process Steps**
    - **1.** Collects all object files libraries.
    - **2.** Resolves symbol dependencies beetween them.
    - **3.** Arranges code and data sections (.text, .data, .bss) into memory.
    - **4.** Produces the final executable or library file.

# Variables

[Video being studied](https://www.youtube.com/watch?v=zB9RI8_wExo&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=8) <--


Allow to name and store a piece or variable data, in stack or heap memory.

The actual only difference between variables is the size they occupy.

| Type        | Bytes | Bits | Range Min                     | Range Max                      | Range (2^n) Min | Range (2^n) Max |
|-------------|-------|------|--------------------------------|--------------------------------|-----------------|-----------------|
| int8_t      | 1     | 8    | -128                           | 127                            | -2^7            | 2^7 - 1         |
| int16_t     | 2     | 16   | -32 768                        | 32 767                         | -2^15           | 2^15 - 1        |
| int32_t     | 4     | 32   | -2 147 483 648                 | 2 147 483 647                  | -2^31           | 2^31 - 1        |
| int64_t     | 8     | 64   | -9 223 372 036 854 775 808     | 9 223 372 036 854 775 807      | -2^63           | 2^63 - 1        |
| uint8_t     | 1     | 8    | 0                              | 255                            | 0               | 2^8 - 1         |
| uint16_t    | 2     | 16   | 0                              | 65 535                         | 0               | 2^16 - 1        |
| uint32_t    | 4     | 32   | 0                              | 4 294 967 295                  | 0               | 2^32 - 1        |
| uint64_t    | 8     | 64   | 0                              | 18 446 744 073 709 551 615     | 0               | 2^64 - 1        |
| char        | 1     | 8    | -128                           | 127                            | -2^7            | 2^7 - 1         |
| short       | 2     | 16   | -32 768                        | 32 767                         | -2^15           | 2^15 - 1        |
| int         | 4     | 32   | -2 147 483 648                 | 2 147 483 647                  | -2^31           | 2^31 - 1        |
| long        | 8     | 64   | -9 223 372 036 854 775 808     | 9 223 372 036 854 775 807      | -2^63           | 2^63 - 1        |
| float       | 4     | 32   | 1.4e-38                        | 3.4e+38                       | 2^-126          | 2^127           |
| double      | 8     | 64   | 1.7e-308                       | 1.7e+308                      | 2^-1022         | 2^1023          |
| long double | 10/12/16 | 96/112/128 | 1.7e-4932            | 1.7e+4932                     | 2^-16382        | 2^16383         |
| bool        | 1     | 8    | false                          | true                           | false           | true            |
| void*       | 8     | 64   | -9 223 372 036 854 775 808     | 9 223 372 036 854 775 807      | -2^63           | 2^63 - 1        |
| wchar_t     | 2     | 16   | -32 768                        | 32 767                         | -2^15           | 2^15 - 1        |
| char16_t    | 2     | 16   | -32 768                        | 32 767                         | -2^15           | 2^15 - 1        |
| char32_t    | 4     | 32   | -2 147 483 648                 | 2 147 483 647                  | -2^31           | 2^31 - 1        |
| nullptr_t   | 0     | 0    | 0                              | 0                              | 0               | 0               |
| size_t      | 0/8   | 0/64 | 0                              | 2^64 - 1                      | 0               | 2^64 - 1        |
| intptr_t    | 0/8   | 0/64 | -2^63                          | 2^63 - 1                      | -2^63           | 2^63 - 1        |
| uintptr_t   | 0/8   | 0/64 | 0                              | 2^64                          | 0               | 2^64            |


- **Variable size** – we can check the size of a variable using `sizeof()`
- **Unsigned** – unsigned types store only **non-negative** values. Unlike signed types, which reserve **one bit to represent the sign (positive or negative)**, unsigned types use all available bits to represent the value itself. As a result, unsigned variables can represent larger maximum values for the same number of bits.

# Functions

[Video being studied](https://www.youtube.com/watch?v=V9zuox47zr0&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=9) <--

- **Functions** - Functions are blocks of code, that are design to perform a specific task. In classes those blocks are called methods.

- When a function is called, the compiler generates a call instruction, the entire stack frame for the function needs to be created, meaning things like parameters need to be pushed onto the stack and also the return address, so what happens is we jump to a different part of the binary and then we jump back.This jumping takes time. This is not the case for inline functions.

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

# Debug

[Video being studied](https://www.youtube.com/watch?v=0ebzPwixrJA&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=11) <--

- **Breakpoints** - points in the code where the debugger intentionally pauses execution. When the program is paused, it becomes possible to inspect internal behavior, such as memory values, variable states, and execution flow, which helps in understanding and debugging the program.

    - **Note** - Make sure to be in **Debug Mode**.

- Under **Debug mode** the compiler does some extra things, like put **C** on uninitialized memory. This is to help debug and identify, in this case, we did not initialize this part. Anyway, always test with **Release** exactly because of this differences, as might provoke different behaviors.

# Conditions and Branches

[Video being studied](https://www.youtube.com/watch?v=0ebzPwixrJA&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=11) <--

- **if statements** - we use this type of statements when we want to execute a code, only if a certain condition is validated. Regardless of the validation result, we always move on to a different section in memory, as result this type of statments do carry **overhead**. Actually most optimazed code always try not to use **branching / if statments**.

    - **Overhead** - overhead is the extra cost in resources (execution time, memory, or complexity) that a program has to pay to support a feature, but which is not part of the main work that the program wants to perform.

# Loops

[Video being studied](https://www.youtube.com/watch?v=_1AwR-un4Hk&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=14) <--

- **For Loops** - `for(int i=0; i<5; i++)`, the first statement initializes, the second part is a condition for the loop to execute, and the final modifies the variable that controls the condition.

- **While Loops** - `while(i<5)`, it loops while the condition is true. 

- **Do While Loops** - `do while(i<5)`, it's almost the same as a **while loop**, but it executes at least one time.
    
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


          