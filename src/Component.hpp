#include <string>
#include <vector>
#include "Property.hpp"

class Component
{
public:
    void addProp(Property& prop);
    void removeProp(std::string& name);
    void editProp(std::string& name, int quantity);
private:
    std::vector<Property> properties;
};