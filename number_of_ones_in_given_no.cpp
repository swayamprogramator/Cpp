 
#include<iostream>
using namespace std;
 
int main()
{
    int num, temp, count = 0;
 
    cout << "Enter the number : ";
    cin >> num;
    temp = num;
    while (temp != 0)
    {
        if (temp % 10 == 1)
            count++;
        temp = temp / 10;
    }
    cout << "The number of ones in " << num
         << " is " << count << endl;
}