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
