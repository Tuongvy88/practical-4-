#include<iostream>
#include<string>
#include "Capybara.h"
#include<stdio.h>
#include<iostream>

using namespace std;

Capybara::Capybara(){

}
string Capybara::getName(){
    return name; // return the variable 
}
void Capybara::setName(string capyName){
    name = capyName;
    }   // change the name

void Capybara::setAge(int capyAge){
    age = capyAge;
}      // change the age
int Capybara:: getAge(){
    return age; // return back to age 
}
Capybara:: ~Capybara(){
    
}
