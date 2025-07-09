#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat() {
    type = "WrongCat";
    std::cout << "[WrongCat] Constructor" << std::endl;
}
WrongCat::~WrongCat() {
    std::cout << "[WrongCat] Destructor" << std::endl;
}
void WrongCat::makeSound() const {
    std::cout << "[WrongCat] MEUUUH!" << std::endl;
}
