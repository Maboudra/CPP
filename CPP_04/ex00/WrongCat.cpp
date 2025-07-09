#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat() {
    type = "WrongCat";
    std::cout << "[WrongCat] Constructor" << std::endl;
}
WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    std::cout << "[WrongCat] Copy constructor" << std::endl;
}
WrongCat& WrongCat::operator=(const WrongCat& rhs) {
    WrongAnimal::operator=(rhs);
    std::cout << "[WrongCat] Copy assignment" << std::endl;
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "[WrongCat] Destructor" << std::endl;
}
void WrongCat::makeSound() const {
    std::cout << "[WrongCat] MEUUUH!" << std::endl;
}
