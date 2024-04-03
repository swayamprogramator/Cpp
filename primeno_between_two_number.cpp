#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int result=1;
    if(n2==0 || n2==1){
        cout<<"Prime number not define for 0 and 1";
      
    }
    for(int i=n1;i<=n2;i++){
        int j;
        for(j=2;j<=i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            cout<<i<<"\t";
        }
        
    }
    return 0;
}