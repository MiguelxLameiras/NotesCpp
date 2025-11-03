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
    
