#include <iostream>
using namespace std;
 
int main()
{
    int integer;
    char character;
    float float_value;
    double double_value;
    bool boolean;
 
    cout << "Non-zero value stands for true and "
         << "anything else for false " << endl;
    cout << "Enter the boolean value : ";
    cin  >> boolean;
    cout << "Enter an integer value  : ";
    cin  >> integer;
    cout << "Enter the character     : ";
    cin  >> character;
    cout << "Enter the float value   : ";
    cin  >> float_value;
    cout << "Enter the double value  : ";
    cin  >> double_value;
    cout << endl;
    cout << "Integer   : " << integer << endl
         << "Character : " << character << endl
         << "Float     : " << float_value << endl
         << "Double    : " << double_value << endl
         << "Boolean   : " << boolean;
}