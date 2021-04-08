#ifndef DOG_H
#define DOG_H
#include <iostream>
#include "Animal.h"

class Dog : public Animal {
private:
    const char* name;

public:
    Dog(const char* name, const char* color);//two param construct
    Dog(const Dog& d);//copy constructor
    ~Dog();//destructor
    const char* getName() const; //getName
    void makeSound() const; //makeSound

};
#endif
