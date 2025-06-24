#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int _fixedPointValue;
    static const int _fractionalBits = 8;

public:
    Fixed();                           // Constructeur par défaut
    Fixed(const Fixed& other);         // Constructeur de recopie
    Fixed& operator=(const Fixed& other); // Opérateur d'affectation
    ~Fixed();                          // Destructeur

    int getRawBits(void) const;       // Accesseur
    void setRawBits(int const raw);   // Mutateur
};

#endif
