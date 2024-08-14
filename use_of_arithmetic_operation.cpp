#include<iostream>
using namespace std;
 
int main()
{
    int Num1, Num2;
 
    cout << "Enter two numbers to be operated with arithmetic operators: ";
    cin >> Num1 >> Num2;
 
    cout << endl;
    cout << "Num1 + Num2 = " << Num1 + Num2 << endl;
    cout << "Num1 * Num2 = " << Num1 * Num2 << endl;
    cout << "Num1 - Num2 = " << Num1 - Num2 << endl;
    if (Num2 != 0)
        cout << "Num1 / Num2 = " << Num1 / Num2 << endl;
    else
        cout << "Num2 is not non-zero. Division is not defined. " << endl;
 
    return 0;
}