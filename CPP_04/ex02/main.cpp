#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    std::cout << "=== Test de base avec polymorphisme ===" << std::endl;

    //const Animal* a = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " : ";
    j->makeSound();
    std::cout << i->getType() << " : ";
    i->makeSound();

    delete j;
    delete i;

    std::cout << "\n=== Tableau d'animaux (Dog et Cat) ===" << std::endl;

    Animal* animals[4];
    int index = 0;

    // Ajouter 2 chiens
    while (index < 2)
    {
        animals[index] = new Dog();
        ++index;
    }

    // Ajouter 2 chats
    while (index < 4)
    {
        animals[index] = new Cat();
        ++index;
    }

    // Appeler makeSound sur chaque animal
    index = 0;
    while (index < 4)
    {
        animals[index]->makeSound();
        ++index;
    }

    // Supprimer les animaux
    index = 0;
    while (index < 4)
    {
        delete animals[index];
        ++index;
    }

    std::cout << "\n=== Test de copie profonde ===" << std::endl;

    Dog basicDog;
    basicDog.setIdea(0, "Manger");
    basicDog.setIdea(1, "Dormir");

    Dog copiedDog = basicDog;
    std::cout << "Copie - Idée 0 : " << copiedDog.getIdea(0) << std::endl;
    std::cout << "Copie - Idée 1 : " << copiedDog.getIdea(1) << std::endl;

    basicDog.setIdea(0, "Nouvelle idée");

    std::cout << "Original modifié - Idée 0 : " << basicDog.getIdea(0) << std::endl;
    std::cout << "Vérification copie - Idée 0 : " << copiedDog.getIdea(0) << std::endl;

    std::cout << "\n=== Test de destruction automatique ===" << std::endl;

    {
        Dog d;
        Cat c;
        d.makeSound();
        c.makeSound();
    }

    std::cout << "\n=== Fin des tests ===" << std::endl;

    return 0;
}

