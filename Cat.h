#ifndef CAT_H
#define CAT_H
#include <iostream>
#include "Animal.h"

class Cat : public Animal {
private:
    const char* name;

public:
    Cat(const char* name, const char* color);//two param construct
    Cat(const Cat& d);//copy constructor
    ~Cat();//destructor
    const char* getName() const; //getName
    void makeSound() const; //makeSound

};
#endif
