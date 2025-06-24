#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int                 _fixedPointValue;                 // valeur stockée
    static const int    _fractionalBits = 8;              // 256 = 1 << 8

public:
    /* Canonical form ---------------------------------------------------- */
    Fixed();                             // constructeur par défaut
    Fixed(const Fixed& other);           // constructeur de recopie
    Fixed& operator=(const Fixed& rhs);  // opérateur d’affectation
    ~Fixed();                            // destructeur

    /* Nouveaux constructeurs ------------------------------------------- */
    explicit Fixed(int const n);         // depuis int
    explicit Fixed(float const f);       // depuis float

    /* Accesseurs bruts -------------------------------------------------- */
    int   getRawBits(void)  const;
    void  setRawBits(int const raw);

    /* Conversions ------------------------------------------------------- */
    float toFloat(void) const;
    int   toInt(void)   const;
};

/* Surcharge de l’opérateur d’insertion pour l’affichage */
std::ostream& operator<<(std::ostream& os, Fixed const& value);

#endif
