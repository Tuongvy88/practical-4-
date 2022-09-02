#ifndef CAPYBARA_H
#define CAPYBARA_H
#include <iostream>
#include <string>
using namespace std;
class Capybara
{
    string name;
    int age;

public:
    Capybara();
    void setName(string capyName);
    string getName();
    void setAge(int capyAge);
    int getAge();
    ~Capybara();
};
#endif