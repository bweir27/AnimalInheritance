#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

class Animal{

protected:
    const char* color;
    const char* sound;

public:
    Animal(); //generic constructor
    Animal(const char* color); //1 param constr
    Animal(const Animal& a); //copy constr
    virtual ~Animal(); //destructor
    virtual void makeSound() const; //make sound
    virtual const char* getColor() const; //get Color
    virtual const char* getName() const; //get Name
    virtual void printColor() const; //Debugging
};

#endif
