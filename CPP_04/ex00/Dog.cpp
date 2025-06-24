#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
    type = "Dog";
    std::cout << "[Dog] Constructor" << std::endl;
}
Dog::Dog(const Dog& other) : Animal(other) {
    std::cout << "[Dog] Copy constructor" << std::endl;
}
Dog& Dog::operator=(const Dog& rhs) {
    Animal::operator=(rhs);
    std::cout << "[Dog] Copy assignment" << std::endl;
    return *this;
}
Dog::~Dog() {
    std::cout << "[Dog] Destructor" << std::endl;
}
void Dog::makeSound() const {
    std::cout << "[Dog] WOOF!" << std::endl;
}
