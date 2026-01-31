# Enums

[Video being studied](https://www.youtube.com/watch?v=x55jfOd5PEE&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=23)

- **Enums** - it creats a new type which contains integers with a named attached to it. By default, if no values are specified, the enumeration starts at 0 and each following value is incremented by 1, but if the first value is set the rest will incrment thay certain value by 1, for example, `enum example{ a =1, b};`, b will be two, however it's a good practice to set all values.
    By default, enum types are integers but we can specife it to **char** for example, as long it's in integer limits.

- **Enum Classes**

    - **Example:**

    ```cpp
    enum class example1 {
        vermelho, preto
    };

    enum class example2 {
        vermelho, preto
    };
    ```

    -  Enum classes are preferred as it avoids accidental implicit conversions to integers, by refering the scoup of the variable, in the example we can refer to the two different ""vermelho"" by writting, `example1 x = example1::vermelho` or `example2 x = example2::vermelho`, enhancing type safety.

