#include <iostream>
#include "Cat.hpp"

Cat::Cat() : brain(new Brain()) {
    type = "Cat";
    std::cout << "[Cat] Constructor" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other), brain(new Brain(*other.brain)) {
    std::cout << "[Cat] Copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat& rhs) {
    std::cout << "[Cat] Copy assignment" << std::endl;
    if (this != &rhs) {
        Animal::operator=(rhs);
        *brain = *rhs.brain;
    }
    return *this;
}

Cat::~Cat() {
    delete brain;
    std::cout << "[Cat] Destructor" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "[Cat] MEOW!" << std::endl;
}

Brain* Cat::getBrain() const {
    return brain;
}
