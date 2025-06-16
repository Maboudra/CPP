#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <unistd.h>

int main() {
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (std::cin.eof()) {
            std::cout << "\nEOF detected. Exiting..." << std::endl;
            break;
        }

        if (command == "ADD") {
            phoneBook.addContact();
        } else if (command == "SEARCH") {
            phoneBook.searchContacts();
        } else if (command == "EXIT") {
            break;
        } else {
            std::cout << "Unknown command. Try again." << std::endl;
            sleep(2);
            system("clear");
        }
    }

    return 0;
}
