#include<iostream>
#include<string.h>
#include<string>
#include "Capybara.h"
#ifndef WAGON_H
#define WAGON_H

using namespace std;
class Wagon{
public:
    int available_seat;
    Capybara Capybara1;
    Capybara Capybara2; 
    Capybara Capybara3; 
    Capybara Capybara4;
Wagon();                               
bool addCapybara(Capybara newCapy);    
void emptyWagon();                     
void printCapybaras();                 
                                       
~Wagon();

};                                    
#endif