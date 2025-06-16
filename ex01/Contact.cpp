#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact() {
    // Constructeur vide
}

void Contact::setContact() {
    do {
        std::cout << "First name: ";
        std::getline(std::cin, firstName);
    } while (firstName.empty());

    do {
        std::cout << "Last name: ";
        std::getline(std::cin, lastName);
    } while (lastName.empty());

    do {
        std::cout << "Nickname: ";
        std::getline(std::cin, nickname);
    } while (nickname.empty());

    do {
        std::cout << "Phone number: ";
        std::getline(std::cin, phoneNumber);
    } while (phoneNumber.empty());

    do {
        std::cout << "Darkest secret: ";
        std::getline(std::cin, darkestSecret);
    } while (darkestSecret.empty());
}

void Contact::displayShort(int index) const {
    std::string fields[3] = { firstName, lastName, nickname };

    std::cout << std::setw(10) << index << "|";
    for (int i = 0; i < 3; ++i) {
        if (fields[i].length() > 10)
            std::cout << fields[i].substr(0, 9) + "." << "|";
        else
            std::cout << std::setw(10) << fields[i] << "|";
    }
    std::cout << std::endl;
}

void Contact::displayFull() const {
    std::cout << "First name: " << firstName << std::endl;
    std::cout << "Last name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone number: " << phoneNumber << std::endl;
    std::cout << "Darkest secret: " << darkestSecret << std::endl;
}
