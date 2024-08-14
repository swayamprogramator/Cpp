#include <iostream>
 
int main()
{
    int a, d, n;
 
    std::cout << "Enter a, d, n of AP: ";
    std::cin >> a >> d >> n;
    std::cout << std::endl << "Terms of AP : a = " << a
              <<  ", d = " << d << ", n = " << n << std::endl;
    do {
        std::cout << a << "\t";
        a = a + d;
    }
    while (n-- > 1);
    std::cout << std::endl;
}