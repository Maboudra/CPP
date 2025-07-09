#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "[WrongAnimal] Constructor" << std::endl;
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
