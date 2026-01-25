# Classes

[Video being studied](https://www.youtube.com/watch?v=2BP8NhxjrO0&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=18)
 <--
- **Classes** - A data types that contain both attributes and methods, this allows for improved code organization and the way the system is maintained.

    - **Example:**
    ```cpp
    class Player{
        public: //This allows for attributes and methods to be used outside of the class

            int x,y;
            int speed;

            void Move(int xa, int ya){
                x += xa * player.speed;
                y += ya * player.speed;

    }
    
    int main(){
        Player player;
        player.Move(1, -1);
    }


    }
    ```

- **Structs** - Almost the same as classes, the main difference is visibility. Struct members are public by default, while classes are private, you can use **public:** and **private:** to change that.

    - **Example:**
    ```cpp
    struct Player{
        private: //This allows for attributes and methods to be used only in the struct itself

            int x,y;
            int speed;

            void Move(int xa, int ya){
                x += xa * player.speed;
                y += ya * player.speed;

    }
    
    int main(){
        Player player;
        player.Move(1, -1);
    }


    }
    ```

