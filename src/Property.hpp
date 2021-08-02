#include <string>

class Property
{
public:
    Property(std::string name, int quantity, double price);
private:
    std::string name;
    int quantity;
    double price;
};