#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
private:
    Contact contacts[8];  // tableau fixe de contacts
    int count;            // nombre de contacts ajoutés (max 8)
    int oldest;           // index du contact à remplacer si full

public:
    PhoneBook();                  // constructeur
    void addContact();            // ajoute un nouveau contact
    void searchContacts() const;  // affiche les contacts et permet la sélection
};

#endif
