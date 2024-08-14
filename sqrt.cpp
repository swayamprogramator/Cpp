#include <iostream>
#include <cmath>
#include <limits>
 
int main()
{
    double output, input, min, max;
 
    std::cout << "Enter the value : ";
    std::cin  >> input;
    std::cout << std::endl;
    min = std::numeric_limits<double>::min();
    max = std::numeric_limits<double>::max();
    if (input >= min && input <= max)
    {
        output = sqrt(input);
        std::cout << "Square root of " << input
                  << " = " << output << std::endl;
    }
    else
    {
        std::cerr << "Error: " << input << " not within limits"
                  << std::endl;
    }
    return 0;
}