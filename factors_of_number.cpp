#include<iostream>
using namespace std;
 
int main()
{
    int number, temp = 1;
 
    cout << "Enter the number to determine its factors : " << endl;
    cin >> number;
    cout << "The factors of " << number << " are : " << endl;
    while (temp <= number)
    {
        if (number % temp==0)
            cout << temp << " ";
 
        temp++;
    }
    cout << endl;
}
