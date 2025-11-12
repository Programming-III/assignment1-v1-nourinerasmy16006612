#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"


#include <iostream>
#include <string>
using namespace std;

 Animal:: Animal(){
     
 }
    Animal:: Animal(string n,int a,bool h){
        this->name = n;
        this->age=a;
        this->isHungry=h;
    }
    Animal:: ~Animal(){}
    void Animal:: display(){
        cout<< name << "(Age: "<<age <<", "<<isHungry<<")"<<endl;  

    }
    void Animal:: feed(){
        if(isHungry)isHungry=false;
    }
    string Animal:: getName(){
        return this->name;
    }
    int Animal:: getAge(){
        return this->age;
    }
    bool Animal:: isAHungry(){
        return this->isHungry;
    }
    
    void Animal::  setName(string n){
        this->name=n;
    }
    void Animal:: setAge(int a){
        this->age=a;
    }
    void Animal:: setH(bool h){
        this->isHungry=h;
    }
    
    Mammal:: Mammal():Animal(){}
    Mammal:: Mammal(string n,int a,bool h,string fur):Animal(n,a,h){
        this->furColor = fur;
    }
 Mammal::    ~Mammal(){}
 
 Bird::  Bird(){}
   Bird::  Bird(string n, int a, bool h, float w):Animal(n,a,h){
       this->wingSpan =w;
   }
  Bird::  ~Bird(){
  }
  
  Reptile:: Reptile(){}
   Reptile::  Reptile(string n,int a,bool h, bool ven):Animal(n,a,h){
       this->isVenomous=ven;
   }
   Reptile::  ~Reptile(){}
   
 Enclosure::   Enclosure(){}
    Enclosure:: Enclosure(int cap,int count){
        this->capacity =cap;
        this->currentCount=count;
        this->animals = (Animal*)malloc(cap*sizeof(Animal));
    }
   Enclosure:: ~Enclosure(){}
    void Enclosure:: addAnimals(Animal* a){
        if(animals!=nullptr){
            //(animals+currentCount)=a;
        }
    }
    void Enclosure:: displayAnimals(){
        cout<< "Enclosure 1 Animals: "<<endl;
        for(int i =0;i<currentCount;i++){
            (animals+i)->display();
        }
    }
    int Enclosure:: getCap(){return this->capacity;}
    int Enclosure:: getCount(){return this->currentCount;}
    void Enclosure:: setCap(int c){ this->capacity=c;}
    void Enclosure:: setCount(int c){ this->currentCount=c;}
   
   Visitor:: Visitor(){}
  Visitor::  Visitor(string v,int t){
      this->visitorName = v;
      this->ticketsBought=t;
  }
    Visitor:: ~Visitor(){}
    void Visitor:: diplayInfo(){
        cout<< "Visitor Info: "<<endl;
        cout<<"Name: "<< visitorName <<endl<<"Tickets Bought: "<< ticketsBought<<endl;
    }
    string Visitor:: getVName(){return this->visitorName;}
    int Visitor:: getTB(){return this->ticketsBought;}
    void Visitor:: setVName(string n){this->visitorName=n;}
    void Visitor:: setTB(int t){this->ticketsBought=t;}
    
    int main(){
        Enclosure E1(3,4);
     Mammal m1("lion",4,true,"fur");
     Bird b1("bird",4,true,09.3);
     Reptile r("rep",5,true,true);

     e1.addAnimals(m1*);
          e1.addAnimals(b1*);
     e1.addAnimals(r*);

     
        
    }
    
