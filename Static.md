# Static

[Video being studied](https://www.youtube.com/watch?v=f3FVU-iwNuA&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=21)

- Static keyword has two meanings depending if it's outside or inside of a class.

    - If it's outside of a class, then it means that variable or method with the static keyword is only visible inside that translation unit.

    - When it's used inside a class, it means that the member belongs to the class itself rather than to individual instances. Therefore, the same variable is shared by all instances of the class. This can be used for example, to generate unique IDs for a group of products.


- **Static outside of a class** - If we have `static int variable = 5;`, then it means this variable is only linked internally, therefore the linker will only look for linkages to this variable in that **.cpp** file.        

    - **Note** - Without the static keyword, if another variable or method with the same name exists in a different translation unit, a **duplication linkage error** appears.