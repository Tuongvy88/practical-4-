#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "Person.h"
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class Airplane
{
    Person pilot;
    Person coPilot;
    string callsign;

public:
    Airplane(string callsign, Person thePilot, Person theCoPilot);

    void setPilot(Person thePilot); // change the pilot
    Person getPilot();

    void setCoPilot(Person theCoPilot); // change the co-pilot
    Person getCoPilot();

    void printDetails();

private:
};

#endif