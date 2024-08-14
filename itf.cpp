
#include <iostream>
#include <cmath>
#include <iomanip>
 
int main()
{
    double value, result;
    int choice;
 
    std::cout << "Enter a choice " << std::endl;
    std::cout << "1. Inverse Sine" << std::endl;
    std::cout << "2. Inverse Cosine" << std::endl;
    std::cout << "3. Inverse Tangent" << std::endl;
    std::cin  >> choice;
    switch (choice) {
        case 1:
            std::cout << "Enter a value ";
            std::cin  >> value;
            std::cout << "asin(val) = " << std::setprecision(3)
                      << asin(value) << std::endl;
            break;
        case 2:
            std::cout << "Enter a value ";
            std::cin  >> value;
            std::cout << "acos(val) = " << std::setprecision(3)
                      << acos(value) << std::endl;
            break;
        case 3:
            std::cout << "Enter a value ";
            std::cin  >> value;
            std::cout << "atan(val) = " << std::setprecision(3)
                      << atan(value)  << std::endl;
            break;
    }
    return 0;
}