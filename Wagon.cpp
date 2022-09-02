#include <iostream>
#include <string.h>
#include <string>
#include "Wagon.h"
#include "Capybara.h"

using namespace std;

Wagon::Wagon()
{
    available_seat = 4;
}
bool Wagon::addCapybara(Capybara newCapy)
{
    if (available_seat < 1)  //setting the condition 
    {
        return 0;
    }

    switch (available_seat)
    {
    case 4:
        Capybara1 = newCapy;
        available_seat--;

        return 1;
        break;
    case 3:
        Capybara2 = newCapy;
        available_seat--;
        return 1;
        break;
    case 2:
        Capybara3 = newCapy;
        available_seat--;
        return 1;
        break;
    case 1:
        Capybara4 = newCapy;
        available_seat--;
        return 1;
        break;
    }
    return 1;
}

void Wagon::emptyWagon()
{
    available_seat = 4;
}

void Wagon::printCapybaras()
{
    if (available_seat == 0)
    {
        cout << Capybara1.getName() << " " << Capybara1.getAge() << endl;
        cout << Capybara2.getName() << " " << Capybara2.getAge() << endl;
        cout << Capybara3.getName() << " " << Capybara3.getAge() << endl;
        cout << Capybara4.getName() << " " << Capybara4.getAge() << endl;
    }
    if (available_seat == 1)
    {
        cout << Capybara1.getName() << " " << Capybara1.getAge() << endl;
        cout << Capybara2.getName() << " " << Capybara2.getAge() << endl;
        cout << Capybara3.getName() << " " << Capybara3.getAge() << endl;
    }
    if (available_seat == 2)
    {
        cout << Capybara1.getName() << " " << Capybara1.getAge() << endl;
        cout << Capybara2.getName() << " " << Capybara2.getAge() << endl;
    }
    if (available_seat == 3)
    {
        cout << Capybara1.getName() << " " << Capybara1.getAge() << endl;
    }
}

Wagon::~Wagon() {}
