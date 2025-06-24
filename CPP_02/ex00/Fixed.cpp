#include "Fixed.hpp"

// Constructeur par défaut
Fixed::Fixed() : _fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

// Constructeur de recopie
Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other; // Utilise l'opérateur d'affectation
}

// Opérateur d'affectation
Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_fixedPointValue = other.getRawBits();
    return *this;
}

// Destructeur
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

// Getter
int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}

// Setter
void Fixed::setRawBits(int const raw) {
    this->_fixedPointValue = raw;
}
