#include<iostream>
#include<iomanip>
using namespace std;
 
int main()
{
    char c;
    int i;
    long l;
    float f;
    double d;
 
    cout << "Type : " << " Size" << endl;
    cout << "char " << setw(5) << setfill(' ')
         << sizeof(c) << endl;
    cout << "integer " << setw(2) << setfill(' ')
         << sizeof(i) << endl;
    cout << "long " << setw(5) << setfill(' ')
         << sizeof(l) << endl;
    cout << "float " << setw(4) << setfill(' ')
         << sizeof(f) << endl;
    cout << "double " << setw(3) << setfill(' ')
         << sizeof(d) << endl;
}