#include "Dynamic.hpp"

Base *generate()
{
    srand((unsigned int)time(NULL));
    int n = rand() % 3;
    switch (n)
    {
    case 0:
        return new A;
    case 1:
        return new B;
    case 2:
        return new C;
    default:
        return NULL;
    }
}

void identify(Base* p){
    if(p == NULL)
        std::cout << "NULL" << std::endl;
    else if(dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if(dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if(dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        (void)a;
    }
    catch(const std::exception& e)
    {
        try
        {
            B& b = dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
            (void)b;
        }
        catch(const std::exception& e)
        {
            try
            {
                C& c = dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
                (void)c;
            }
            catch(const std::exception& e)
            {
                std::cout << "Unknown" << std::endl;
            }
        }
    }
}