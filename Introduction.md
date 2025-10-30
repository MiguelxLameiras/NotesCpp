# Introduction

[Video being studied](https://www.youtube.com/watch?v=SfGuIVzE_Os&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=5) <--

- **Preprocessor statement** - Everything that starts with the <span style="color:lightblue"> **"#"** </span>symbol is a preprocessor operator, the first thing the compiler does when it receives a source file is to process all the preprocessor operators before compiling the code.

   - **Ex:** <span style="color:lightblue"> **"#include"** </span> will look for a file, for example <span style="color:lightblue"> **"iostream"** </span>, take all the contents of that file and insert it in the code, the files that we include are usually header files.

- **Entry Point** - The <span style="color:lightblue"> **"main()"** </span> function is the entry point to a program, being a special case where nothing has to be returned despite being stated with <span style="color:lightblue"> **"int"** </span>, but for default the function returns **0** when it's terminated, this **ONLY APPLIES** for the main function.

- <span style="color:lightblue"> **"<<"** </span>, are an overloaded operators. Operators are just functions, for example, `std::cout << "hello" << std::endl;` could just be `std::cout.print("hello").print(std::endl);`.

    **Note:** <span style="color:lightblue"> **"cout"** </span> function, it's used to print the strings to the console on the screen, meanwhile <span style="color:lightblue"> **"endl"** </span> function moves to a new line.

- `std::cin.get();` function waits until the user presses Enter before advancing to the next line of code.

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
            
           