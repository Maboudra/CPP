#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Adresse de la variable string : " << &str << std::endl;
    std::cout << "Adresse stockee dans stringPTR : " << stringPTR << std::endl;
    std::cout << "Adresse stockee dans stringREF : " << &stringREF << std::endl;

    std::cout << std::endl;

     std::cout << "Valeur de la variable string : " << str << std::endl;
    std::cout << "Valeur pointee par stringPTR : " << *stringPTR << std::endl;
    std::cout << "Valeur pointee par stringREF : " << stringREF << std::endl;
}