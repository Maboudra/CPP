#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("Generic") {
    std::cout << "[Animal] Default constructor" << std::endl;
}
Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << "[Animal] Copy constructor" << std::endl;
}
Animal& Animal::operator=(const Animal& rhs) {
    std::cout << "[Animal] Copy assignment" << std::endl;
    if (this != &rhs)
        type = rhs.type;
    return *this;
}
Animal::~Animal() {
    std::cout << "[Animal] Destructor" << std::endl;
}
void Animal::makeSound() const {
    std::cout << "[Animal] * Generic animal sound *" << std::endl;
}
std::string Animal::getType() const {
    return type;
}
