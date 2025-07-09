#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "[WrongAnimal] Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
    std::cout << "[WrongAnimal] Copy constructor" << std::endl;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs) {
    std::cout << "[WrongAnimal] Copy assignment" << std::endl;
    if (this != &rhs)
        type = rhs.type;
    return *this;
}
WrongAnimal::~WrongAnimal() {
    std::cout << "[WrongAnimal] Destructor" << std::endl;
}
std::string WrongAnimal::getType() const {
    return type;
}
void WrongAnimal::makeSound() const {
    std::cout << "[WrongAnimal] PIOUPIOU!" << std::endl;
}
