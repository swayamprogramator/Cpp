#include <iostream>
 
int main()
{
    long op1, op2, product = 0;
 
    std::cout << "Enter the numbers ";
    std::cin >> op1 >> op2;
    while(op2 > 0)
    {
        product = product + op1;
        op2--;
    }
    std::cout << std::endl << "The product of " << op1
              << " and " << op2 << " is " << product;
}