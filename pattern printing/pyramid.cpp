//Calculator using Switch
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int r,j=0,i=0,k=0;
    cout<<"Enter row:";
    cin>>r;
    for(i=1;i<=r;i++,k=0){
        for(j=1;j<=r-i;j++){
            cout<<"  ";
        }
        while(k!=2*i-1){
            printf("* ");
            k++;
        }
        cout<<"\n";
    }
    return 0;
}