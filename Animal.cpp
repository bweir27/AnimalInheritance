#include <iostream>
#include "Animal.h"

//generic constructor
Animal::Animal(){
    //default animal colors to brown
    this->color="brown";
}

//constructor that sets the color of the animal
Animal::Animal(const char* color){
    //std::cout << "ANIMAL color const\n";
    this->color = color;
}

//copy constructor
Animal::Animal(const Animal& a){
    //std::cout << "ANIMAL: copy const\n";
}

//destructor
Animal::~Animal(){
    std::cout << "ANIMAL: destroying " << this->color << " animal\n";
}

const char* Animal::getColor() const{
    //std::cout << "ANIMAL getColor()\n";
    return this->color;
}

void Animal::makeSound() const{
    //std::cout << "ANIMAL: " << this->sound << "!";
}

const char* Animal::getName() const{
    //std::cout << "ANIMAL: getName()\n";
    return "[No name]";
}

void Animal::printColor() const{
    std::cout << this->color;
}
