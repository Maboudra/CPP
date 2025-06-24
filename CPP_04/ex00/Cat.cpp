#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
    type = "Cat";
    std::cout << "[Cat] Constructor" << std::endl;
}
Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "[Cat] Copy constructor" << std::endl;
}
Cat& Cat::operator=(const Cat& rhs) {
    Animal::operator=(rhs);
    std::cout << "[Cat] Copy assignment" << std::endl;
    return *this;
}
Cat::~Cat() {
    std::cout << "[Cat] Destructor" << std::endl;
}
void Cat::makeSound() const {
    std::cout << "[Cat] MEOW!" << std::endl;
}
