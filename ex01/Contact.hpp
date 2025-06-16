#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    Contact();  // Constructeur

    void setContact();              // Demande à l'utilisateur de remplir les champs
    void displayShort(int index) const; // Affiche un aperçu (index + 3 champs tronqués)
    void displayFull() const;       // Affiche tous les champs
};

#endif
