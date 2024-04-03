#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int result=1;
    int num=sqrt(n)+1;
    if(n==0 || n==1){
        cout<<"Prime number not define for 0 and 1";
        goto no;
    }
    for(int i=2;i<=num;i++){
        if(n%i==0){
            result=0;
            break;
        }
    }
    if(result==1){
        cout<<"Prime Number";
    }
    else{
        cout<<"Non Prime Number";
    }
    no:
    return 0;
}