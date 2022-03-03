#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    protected:
        std::string _ideas[100];
    public:
        Brain();
        Brain(const Brain &brain);
        ~Brain();
        Brain &operator=(const Brain &obj);
};

#endif