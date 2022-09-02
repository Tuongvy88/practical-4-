#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include "Person.h"

using namespace std;

Person::Person() {}
Person::Person(int mySalary, string myName)
{
    salary = mySalary;
    name = myName;
}
string Person::getName()
{
    return name; //return the variable 
}
void Person::setName(string myName)
{
    name = myName;
}
int Person::getSalary()
{
    return salary;
}
void Person::setSalary(int mySalary)
{
    salary = mySalary; //define the variable 
}
Person::~Person() {}
