#ifndef ENCLOSURE_H
#define ENCLOSURE_H
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
    void addAnimals(Animal* a);
    void displayAnimals();
};
#endif
