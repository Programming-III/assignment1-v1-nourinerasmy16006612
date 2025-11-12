#ifndef ENCLOSURE_H
#define ENCLOSURE_H
#include "Animal.h"

#include <iostream>

#include <string>
//include animal.h?
using namespace std;

class Enclosure{
    private:
    int capacity;
    int currentCount;
    Animal* animals;
    public:
    Enclosure();
    Enclosure(int cap,int count);
    ~Enclosure();
    void addAnimals(Animal* a);
    void displayAnimals();
    int getCap();
    int getCount();
    void setCap(int c);
    void setCount(int c);
};
#endif
