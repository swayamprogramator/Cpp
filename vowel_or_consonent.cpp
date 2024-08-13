#include<ctype.h>
using namespace std;
int main ()
{
    char ch;
    cout << "Enter a character : ";
    cin >> ch;
    if (isdigit(ch))
        cout << "\nThe entered character is a digit.";
    else if (isalpha(ch))
        {
            if ((ch == 'A') || (ch == 'E')|| (ch == 'I')|| (ch == 'O')|| (ch == 'U')|| (ch == 'a')|| (ch == 'e')|| 
            (ch == 'i')|| (ch == 'o')|| (ch == 'u'))
                cout << "\nThe entered character is a vowel.";
            else
                cout << "\nThe entered character is a consonant.";
        }
        else 
            cout << "\nThe entered character is a special character.";
    return 0;
}