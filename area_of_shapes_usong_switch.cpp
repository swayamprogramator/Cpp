#include <iostream>
const float PI = 3.14;
 
void calculateArea(std::string shape)
{
    /* Comparing first character of shape string */
    switch (shape[0]) {
    case 'c':
 
        float r;
 
        std::cout << "\nEnter the radius ";
        std::cin >> r;
        std::cout << "\nArea of Circle : " << PI * r * r
                  << " square units" << std::endl;
        break;
    case 's':
        float a;
 
        std::cout << "\nEnter the side length ";
        std::cin >> a;
        std::cout << "\nArea of Square : " << a * a
                  << " square units" << std::endl;
        break;
 
    case 'r':
        float b, h;
 
        std::cout << "\nEnter the breadth ";
        std::cin >> b;
        std::cout << "\nEnter the height ";
        std::cin >> h;
        std::cout << "\nArea of Rectangle : " << b * h
                  << " square units" << std::endl;
        break;
    }
}
 
int main()
{
    std::string s;
 
    std::cout << "Enter the shape : ";
    getline(std::cin, s);
    calculateArea(s);
}