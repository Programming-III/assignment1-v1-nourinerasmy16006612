#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
using namespace std;
class Animal{
    private:
    string name;
    int age;
    bool isHungry;
    
    public:
    Animal();
    Animal(string n,int a,bool h);
    ~Animal();
    void display();
    void feed();
    string getName();
    int getAge();
    bool isHungry();
    
    void setName():
    void setAge();
    void setH();
    
};


#endif
