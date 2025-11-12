#ifndef VISITOR_H 
#define VISITOR_H
#include "Animal.h"

#include <iostream>
#include <string>
//include animal.h?
using namespace std;

class Visitor{
    private :
    string visitorName;
    int ticketsBought;
    public:
    Visitor();
    Visitor(string v,int t);
    ~Visitor();
    void diplayInfo();
    string getVName();
    int getTB();
    void setVName(string n);
    void setTB(int t);
}
;
#endif
