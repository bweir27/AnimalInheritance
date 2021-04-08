#include <iostream>
#include "Duck.h"
#include "Animal.h"

Duck::Duck(const char* color):Animal(color){
    //std::cout << "DUCK: constr\n";
    this->sound = "Quack!";
}

//copy constr
Duck::Duck(const Duck& duck){
    //std::cout<<"DUCK: copy constructor\n";
    this->color = duck.color;
    this->sound = duck.sound;
}

//destructor
Duck::~Duck(){
    std::cout<<"DUCK: destroying " << this->color << " duck\n";
}

void Duck::makeSound() const {
    std::cout << this->sound;
}
