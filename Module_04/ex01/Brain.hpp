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
        void addIdea(const std::string &idea, int index);
        std::string getIdea(int index) const;
};

#endif