#include <iostream>
#include <iomanip>
#include <cmath>
const double PI = 3.14159265;
 
int main()
{
    double degrees, radians;
 
    std::cout << "Enter angle in degrees ";
    std::cin >> degrees;
    // Trigonometric functions accept angles in radians
    radians = degrees * PI / 180.0;
    std::cout << "Value of trigonometric ratios " << std::endl;
    std::cout << "cos(radians) = " << std::setprecision(3)
              << cos(radians) << std::endl;
    std::cout << "sin(radians) = " << std::setprecision(3)
              << sin(radians) << std::endl;
    std::cout << "tan(radians) = " << std::setprecision(3)
              << tan(radians) << std::endl;
    return 0;
}