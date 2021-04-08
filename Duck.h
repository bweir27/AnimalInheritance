#ifndef DUCK_H
#define DUCK_H

#include <iostream>
#include "Animal.h"

class Duck : public Animal {
public:
    Duck(const char* color);
    Duck(const Duck& duck); //copy constructor
    ~Duck();
    void makeSound() const; //makeSound
};

#endif
