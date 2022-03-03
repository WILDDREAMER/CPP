#include "./Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain created" << std::endl;
}

Brain::Brain(const Brain &brain)
{
    *this = brain;
}

Brain::~Brain()
{
    std::cout << "Brain destroyed" << std::endl;
}

Brain &Brain::operator=(const Brain &brain)
{
    if (this != &brain)
    {
        for (int i = 0; i < 100; i++)
        {
            _ideas[i] = brain._ideas[i];
        }
    }
    return *this;
}
