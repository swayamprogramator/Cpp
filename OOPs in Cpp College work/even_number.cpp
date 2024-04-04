#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number:";
    cin>>n;
    if(n%2==0){
        cout<<n<<" is even number";
    }
    else{
        cout<<n<<" is odd number";
    }
    return 0;
}