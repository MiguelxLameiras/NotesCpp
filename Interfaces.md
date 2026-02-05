# Interfaces

[Video being studied](https://www.youtube.com/watch?v=UWAdd13EfM8&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=28)

- **Interfaces** - it's a specific type of virtual funtion, **pure virtual function**. Is basacilly the same as an abstract methoad or an interface in **C#** or **Java**, it allow us to define in a base class that not have an implementation and then forces subclasses to actually implement that funtion.

    - **Example:** 
    ```cpp
    class Entity
    {
        public:
            virtual std::string GetName() = 0;  //This makes the method pure virtual.
    }

    class Player : public Entity
    {
        private:
            std::string m_Name;
        public:
            Player(const std::string& name) : m_Name(name) {}

            std::string GetName() override { return m_Name; }
    }

    int main()
    {
        // Entity* e = new Entity() is no more possible
        Entity* e = new Player("");
        std::cout << e->GetName() << std::endl; //Entity

        Player* p = new Player("Miguel");
        std::cout << p->GetName() << std::endl; // Miguel

        Entity* entity = p;
        std::cout << entity->GetName() << std::endl; //Miguel
    }
    ```

    - **Note** - it's not possible to directly instantiate a class with only pure virtual methods.

    - Every sub-class needs to have the pure virtual methods, otherwise it will be not possible to instantiate it.

    - **Example:**
    ```cpp
    class Printable
    {
        public:
            virtual std::string GetClassName() = 0;
    }

    class Entity : public Printable
    {
        public:
            virtual std::string GetName() {return "Entity";}
            std::string GetClassName() override { return "Entity"; } 
    }

    class Player : public Entity
    {
        private:
            std::string m_Name;
        public:
            Player(const std::string& name) : m_Name(name) {}

            std::string GetName() override { return m_Name; }
            std::string GetClassName() override { return "Player"; }
    }

    void PrintName(Entity* entity)
    {
        std::cout << entity->GetName() << std::endl;
    }

    void Print( Printable obj)
    {
        std::cout << obj->GetClassName() << std::endl;
    }

    int main()
    {
        Entity* e = new Entity();
        Print(e); //Returns Entity

        Player* p = new Player("Miguel");
        Print(p); //Returns Player
    }
    ```