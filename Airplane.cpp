#include "Airplane.h"
#include "Person.h"
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

// #pragma once

Airplane::Airplane(string callsign, Person thePilot, Person theCoPilot)
{
    this->callsign = callsign;
    pilot = thePilot; // define
    coPilot = theCoPilot; // define 
}

void Airplane::setPilot(Person thePilot)
{
    pilot = thePilot;
}

Person Airplane::getPilot()
{
    return pilot; // return the variable 
}

void Airplane::setCoPilot(Person theCoPilot)
{
    coPilot = theCoPilot; //define 
}

Person Airplane::getCoPilot()
{
    return coPilot; //return the variable 
}

void Airplane::printDetails()
{
    cout << callsign << endl
         << pilot.getName() << endl
         << coPilot.getName() << endl;
}