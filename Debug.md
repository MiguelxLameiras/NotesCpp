# Debug

[Video being studied](https://www.youtube.com/watch?v=0ebzPwixrJA&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=11) <--

- **Breakpoints** - points in the code where the debugger intentionally pauses execution. When the program is paused, it becomes possible to inspect internal behavior, such as memory values, variable states, and execution flow, which helps in understanding and debugging the program.

    - **Note** - Make sure to be in **Debug Mode**.

- Under **Debug mode** the compiler does some extra things, like put **C** on uninitialized memory. This is to help debug and identify, in this case, we did not initialize this part. Anyway, always test with **Release** exactly because of this differences, as might provoke different behaviors.
