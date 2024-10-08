/*Algorithm

1. The number to be checked is entered.
2. It is squared and reversed.
3. Square root of the reversed number is found.
4. It is reversed again and compared with the original number.
5. If they are same, the number entered is an Adam number, else not.
6. Then result is printed.
7. Exit.

*/


#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
    int num, temp, r1, r2, sq, rev1 = 0, rev2 = 0;
    cout << "Enter a number : ";
    cin >> num;
    temp = num * num;
    while (temp != 0)
    {
        r1 = temp % 10;
        rev1 = rev1 * 10 + r1;
        temp = temp / 10;
    }
    sq = sqrt(rev1);
    while (sq != 0)
    {
        r2 = sq % 10;
        rev2 = rev2 * 10 + r2;
        sq = sq / 10;
    }
    if (rev2 == num)
        cout << "\n" << num << " is an Adam number.";
    else
        cout << "\n" << num << " is not an Adam number.";
    return 0;
}