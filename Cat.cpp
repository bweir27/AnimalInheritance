#include <iostream>
#include "Cat.h"
#include "Animal.h"


//two param constructor
Cat::Cat(const char* name, const char* color) : Animal(color) {
    //std::cout << "CAT: 2 param cnstr\n";
    this->name = name;
    this->sound = "Meow!";
}

//copy constructor
Cat::Cat(const Cat& d){
    // std::cout << "CAT: copy constr\n";
    this->color = d.color;
    this->sound = d.sound;
    this->name = d.name;
}

//destructor
Cat::~Cat(){
    std::cout << "CAT: destroying " << this->name << "\n";
}

const char* Cat::getName() const{
    return this->name;
}

void Cat::makeSound() const {
    std::cout << this->sound;
}

