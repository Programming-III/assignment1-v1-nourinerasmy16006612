#ifndef BIRD_H
#define BIRD_H
#include <iostream>
#include "Animal.h"

#include <string>
using namespace std;
class Bird : public Animal{
    private :
    float wingSpan;
    public:
    Bird();
    Bird(string n, int a, bool h, float w);
    ~Bird();
    
};

#endif
