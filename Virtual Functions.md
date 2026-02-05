# Virtual Functions

[Video being studied](https://www.youtube.com/watch?v=oIV2KchSyGQ&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=27) <--

- **Polymorphism** – is the ability of a single function or object to behave differently depending on the actual type of the object. In object-oriented programming, this allows a base class pointer or reference to dynamically call the method of a derived class.

- **Virtual Funtions** - allow us to overwrite methods within subclasses. If B is a subclass of A and we create a method in class a and declare it as virtual, we have the option to overwrite that method in B to use it differently.

- Without virtual functions, **polymorphism does not occur**.The function call is resolved at **compile time** based on the type of the pointer or reference, not the actual object type.

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
            std::cout << e->GetName() << std:endl; // Returns Entity

            Player* p = new Player("Miguel");
            std::cout << p->GetName() << std::endl; // Returns Miguel

            Entity* entity = p;
            std::cout << entity->GetNme() << std:endl; // Returns Entity

            std::cin.get();
        }
    ```

- This can be fixed using a **V-Table**. It stores pointers to the class’s virtual functions. When a virtual function is called, the program looks up the V-Table to determine the actual type of the object.
    The **virtual** keyword enables this mechanism, while **override** indicates that a subclass provides its own implementation for that virtual function.

    - **Example:**
    ```cpp
        class Entity
        {
            public:
               virtual std::string GetName() { return "Entity";}
        }; 

        class Player : public Entity
        {
            private:
                std::string m_Name;
            public:
                Player(const std::string& name)
                    : m_Name(name) {}
                
                std::string GetName() override { return m_Name; }

        };

        int main()
        {
            Entity* e = new Entity();
            std::cout << e->GetName() << std:endl; // Returns Entity

            Player* p = new Player("Miguel");
            std::cout << p->GetName() << std::endl; // Returns Miguel

            Entity* entity = p;
            std::cout << entity->GetNme() << std:endl; // Returns Miguel

            std::cin.get();
        }
    ```
    - **Note** - We don’t actually need the **override** keyword, but it improves code readability and helps prevent bugs.
    Also, we can only override virtual methods that already exist in the base class.
           