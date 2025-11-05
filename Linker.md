# Linker

[Video being studied](https://www.youtube.com/watch?v=H4s55GgAg0I&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=7) <--

- **Linking Phase** - After compiling every **.cpp** into a object file (**.obj** or **.o**). The <span style="color:lightblue"> **Linker** </span> combines all of them into a single <span style="color:lightblue"> **"executable or library** </span>, connecting function calls and variable references across files to form one unified program.

- **Symbols** - **Fucntions** and **Global Variables** becomes <span style="color:lightblue"> **symbols** </span>. The linker matches where they are declared with where they are defined.

- **Unresolved Symbols** - If a function is declared, for example in a **header**, but not defined anywhere, or if its object file isn't linked, you'll get an <span style="color:lightblue"> **unresolved external symbol** </span> error.

- **Internal vs External Linkage**
    - **Static** - or unnamed namespace <span style="color:lightblue"> **"→"** </span> symbol is only visible inside that file, <span style="color:lightblue"> **internal linkage** </span>.
    - **Normal global definitions** - visible to other files, <span style="color:lightblue"> **external linkage** </span>.
 
 - **Static vs Dynamic Libraries** 
    -   **Static (.lib / .a)** - merged into the program at compile time.
    -   **Dynamic (.dll/.so)** - linked at runtime, only references are stored.

- **Linking Process Steps**
    - **1.** Collects all object files libraries.
    - **2.** Resolves symbol dependencies beetween them.
    - **3.** Arranges code and data sections (.text, .data, .bss) into memory.
    - **4.** Produces the final executable or library file.

