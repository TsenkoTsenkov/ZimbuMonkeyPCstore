#include <iostream>

#include "Property.hpp"

using namespace std;

int main()
{
    return 0;
}

Property::Property(string name, int quantity, double price):
    name{name}, quantity{quantity}, price{price}
{}