#include "person.h"
#include <iostream>

using namespace std;
personType::personType(string first, string last)
{
    firstName = first;
    lastName = last;
}
void personType::print() const
{
    cout << firstName << " " << lastName;
}

void personType::setName(string first, string last)
{
    firstName = first;
    lastName = last;
}

string personType::getFirstName()
{
    return firstName;
}

string personType::getLastName()
{
    return lastName;
}
