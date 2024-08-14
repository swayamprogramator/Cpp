#include<iostream>
using namespace std;
 
int main()
{
    int Num1, Num2;
 
    cout << "Enter two numbers to be operated with comparison operators: ";
    cin >> Num1 >> Num2;
 
    cout << endl;	
    cout << "Num1 >  Num2 = " << ((Num1 >  Num2) ? "True" : "False") << endl;
    cout << "Num1 <  Num2 = " << ((Num1 <  Num2) ? "True" : "False") << endl;
    cout << "Num1 >= Num2 = " << ((Num1 >= Num2) ? "True" : "False") << endl;
    cout << "Num1 <= Num2 = " << ((Num1 <= Num2) ? "True" : "False") << endl;
    cout << "Num1 == Num2 = " << ((Num1 == Num2) ? "True" : "False") << endl;
    cout << "Num1 != Num2 = " << ((Num1 != Num2) ? "True" : "False") << endl;
 
    return 0;
}