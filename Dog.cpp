#include <iostream>
#include "Dog.h"
#include "Animal.h"

//two param constructor
Dog::Dog(const char* name, const char* color) : Animal(color) {
    //  std::cout << "DOG: 2 param cnstr\n";
    this->name = name;
    this->sound = "Woof!";
}

//copy constructor
Dog::Dog(const Dog& d){
    std::cout << "DOG: copy constructor\n";
    this->color = d.color;
    this->sound = d.sound;
    this->name = d.name;
}

//destructor
Dog::~Dog(){
    std::cout << "DOG: destroying " << this->name << "\n";
}

const char* Dog::getName() const {
    return this->name;
}

void Dog::makeSound() const {
    std::cout << this->sound;
}
