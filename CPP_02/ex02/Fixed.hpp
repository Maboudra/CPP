#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int                 _fixedPointValue;
    static const int    _fractionalBits = 8;

public:
    // Canonical
    Fixed();
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& rhs);
    ~Fixed();

    // Constructeurs
    explicit Fixed(int const n);
    explicit Fixed(float const f);

    // Accesseurs
    int   getRawBits(void) const;
    void  setRawBits(int const raw);

    // Conversions
    float toFloat(void) const;
    int   toInt(void) const;

    // Comparaisons
    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;

    // Arithmétiques
    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;

    // Incrémentation / décrémentation
    Fixed& operator++();       // pré-incrémentation
    Fixed operator++(int);     // post-incrémentation
    Fixed& operator--();       // pré-décrémentation
    Fixed operator--(int);     // post-décrémentation

    // Fonctions min / max
    static Fixed&       min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed&       max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
};

// Surcharge de <<
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
