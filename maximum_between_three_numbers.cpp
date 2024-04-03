#include<iostream>
using namespace std;

int main()
{
    int n1,n2,n3;
    cout<<"Enter three Numbers:";
    cin>>n1>>n2>>n3;
    if(n1>n2){
        if(n1>n3){
            cout<<"Maximum is:"<<n1;
        }
        else{
            cout<<"maximum is:"<<n3;
        }
    }
    else{
        if(n2>n3){
            cout<<"Maximum is:"<<n2;
        }
        else{
            cout<<"maximum is:"<<n3;
        }
    }
    return 0;
}