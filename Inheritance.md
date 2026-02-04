# Inheritance

[Video being studied](https://www.youtube.com/watch?v=X8nYM8wdNRE&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=26)

- **Inheritance** - it allows to branch off a base class and create sub-classes, or in another words, the code will have a hierarchy of classes which ralate to each other. It helps to prevent code duplication, because instead of repeating code over and over again, we can put all of our common funtionality between classes into a parent class.

    ```cpp
    class Entity
    {
        public:
            float X,Y;
    
        void Move(float xa, float ya)
        {
            X += xa;
            Y += ya;
        }
    }; 

    class Player : public Entity
    {
        public:
            const char* Name;

            void PrintName()
            {
                std::cout << Name << std::endl;
            }

    };

    int main()
    {
        Player player;
        player.Move(5,5);
        player.X = 2; //All instances of player will have the entity atributes (X,Y and method Move)
        std::cin.get();
    }
    ```