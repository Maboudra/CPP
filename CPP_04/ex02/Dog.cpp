#include "Dog.hpp"
#include <iostream>

Dog::Dog() : brain(new Brain())
{
    this->type = "Dog";
    std::cout << "Dog constructed" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    this->brain = new Brain(*other.brain); // deep copy
    std::cout << "Dog copied" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        this->type = other.type;
        delete this->brain;
        this->brain = new Brain(*other.brain); // deep copy
    }
    std::cout << "Dog assigned" << std::endl;
    return *this;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof! 🐶" << std::endl;
}

void Dog::setIdea(int index, const std::string& idea)
{
    if (brain && index >= 0 && index < 100)
        brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const
{
    if (brain && index >= 0 && index < 100)
        return brain->getIdea(index);
    return "";
}
