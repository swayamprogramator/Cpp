#include <iostream>        
using namespace std;
 
int main () {
    int i = 0;
 
    cout << "Printing 1 to 10 without using loop\n";
    repeat:
    cout << ++i << " ";
    if(i != 10)
    	goto repeat;
    cout << "\n";
}