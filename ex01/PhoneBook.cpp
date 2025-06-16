#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <limits> // pour std::numeric_limits

PhoneBook::PhoneBook() {
    count = 0;
    oldest = 0;
}

void PhoneBook::addContact() {
    int index;

    if (count < 8) {
        index = count;
        count++;
    } else {
        index = oldest;
        oldest = (oldest + 1) % 8;
    }

    contacts[index].setContact();
}

void PhoneBook::searchContacts() const {
    if (count == 0) {
        std::cout << "PhoneBook is empty." << std::endl;
        return;
    }

    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;

    int i = 0;
    while (i < count) {
        contacts[i].displayShort(i);
        i++;
    }

    std::cout << "Enter index: ";
    int index;
    std::cin >> index;

    if (std::cin.fail() || index < 0 || index >= count) {
        std::cout << "Invalid index." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }

    std::cin.ignore(); // vide le buffer après l'index
    contacts[index].displayFull();
}
