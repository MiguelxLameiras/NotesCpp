# Arrays

[Video being studied](https://www.youtube.com/watch?v=ENDaJi08jCU&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=30)

- **Arrays** - it's a way to represent a collection of variables usaually of the same type, in a row. They are useful because if we need a group of variables, we don't need to initialize each one individually.

    - **Example:**

    ```cpp
        int main(){
            int example[5];   //goes from index 0 to 4  
                                //example is a memory address itself pointing to the start of the array, the index moves from its start.
            example[0] = 1;
            example[4] = 5;

            std::cout<<example[0] << std::endl;

            for(int i=0; i<5; i++){
                example[i] = i+1;
            }

            int* ptr = example; //array "is just a pointer"
            *(ptr +2) = 6;  //same as doing example[2]=6 // same as *(int*)*((char*)ptr + 8) = 6 // because type char is only 1 byte while int is 4
        }

    ```

