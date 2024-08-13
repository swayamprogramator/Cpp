#include <iostream>
using namespace std;
int main ()
{
    int num, temp, res, x, i = 0;
    cout << "Enter a binary number : ";
    cin >> num;
	temp = num;
    while (temp != 0)
    {
        x = temp % 10;
        if (x == 1)
            i++;
        temp = temp / 10;
    }
    if (i == 0)
        res = 0;
    if (i % 2 == 0)
        res = 0;
    else
        res = 1;
    cout << "\nExclusive OR of " << num << " is : " << res;
    return 0;	
}