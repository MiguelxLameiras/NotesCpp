# Virtual Functions

[Video being studied](https://www.youtube.com/watch?v=oIV2KchSyGQ&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=27) <--

- **Virtual Funtions** - allow us to overwrite methods within subclasses. If B is a subclass of A and we create a method in class a and declare it as virtual, we have the option to overwrite that method in B to use it differently.

    - **Example:**
    ```cpp
        class Entity
        {
            public:
               std::string GetName() { return "Entity";}
        }; 

        class Player : public Entity
        {
            private:
                std::string m_Name;
            public:
                Player(const std::string& name)
                    : m_Name(name) {}
                
                std::string GetName() { return m_Name; }

        };

        int main()
        {
            Entity* e = new Entity();
            std::cout << e->GetName() << std:endl;

            Player* p = new Player("Miguel");
            std::cout << p->GetName() << std::endl;

            Entity* entity = p;
            std::cout << entity->GetNme() << std:endl;

            std::cin.get();
        }
    ```