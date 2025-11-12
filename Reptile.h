#ifndef REPTILE_H
#define REPTILE_H
#include <iostream>
#include <string>
#include "Animal.h"

//include animal.h?
using namespace std;

class Reptile : public Animal
{private:

    bool isVenomous ;
    
    public :
    Reptile();
    Reptile(string n,int a,bool h, bool ven);
    ~Reptile();
};
#endif
