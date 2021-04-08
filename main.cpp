#include <iostream>
#include "Dog.h"
#include "Duck.h"
#include "Cat.h"
#include "Animal.h"

int main(){

    std::cout << "\n= new\n---------------------\n";

    Cat* c1 = new Cat("Porkchop", "tabby");
    std::cout << "The Cat's name is: " << c1->getName() << ", is " << c1->getColor() << ", and says: ";
    c1->makeSound();
    std::cout << "\n\n";

    Dog* d1 = new Dog("Fido", "brown");
    std::cout << "The Dog's name is: " << d1->getName() << " and says: ";
    d1->makeSound();
    std::cout << "\n\n";

    Duck* duck1 = new Duck("Green");
    std::cout << "The Duck is " << duck1->getColor() << " and says: ";
    duck1->makeSound();
    std::cout << "\n\n";



    std::cout << "Animal*  = new\n---------------------\n";

    Animal* a2 = new Cat("Whiskers", "tabby");
    a2->makeSound();
    std::cout << " said " << a2->getName() << "\n\n";

    Animal* a3 = new Dog("Biscuit", "light-brown");
    a3->makeSound();
    std::cout << " said " << a3->getName() << "\n\n";

    Animal* a4 = new Duck("brown");
    a4->makeSound();
    std::cout << " said " << a4->getName() << " the " << a4->getColor() << " duck\n\n";


    std::cout << "Animal* = [existing]\n---------------------\n";

    Animal* a5 = c1;
    a5->makeSound();
    std::cout << " said " << a5->getName() << "\n\n";

    Animal* a6 = d1;
    a6->makeSound();
    std::cout << " said " << a6->getName() << "\n\n";

    Animal* a7 = duck1;
    a7->makeSound();
    std::cout << " said " << a7->getName() << " the " << a7->getColor() << " duck\n\n";


    std::cout << "Test Copies\n---------------------\n";

    Cat* c2 = c1;
    c2->makeSound();
    std::cout << " said " << c2->getName() << "\n\n";

    Dog* d2 = d1;
    d2->makeSound();
    std::cout << " said " << d2->getName() << "\n\n";

    Duck* duck2 = duck1;
    duck2->makeSound();
    std::cout << " said " << duck2->getName() << " the " << duck2->getColor() << " duck\n\n";


    std::cout << "\nTest Destructors\n---------------------\n";

    delete c1;
    delete d1;
    delete duck1;

    std::cout << "\n";

    delete a2;
    delete a3;
    delete a4;

    std::cout << "\n";
}
