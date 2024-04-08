//Calculator using Switch
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int r,i,j,k=0;
    cout<<"Enter row:";
    cin>>r;
    int n=r;
    for(i=0;i<r;i++){
        for(j=0;j<r;j++){
            if(i==0 || j==0 || i==r-1 || j==r-1)cout<<"* ";
            else{cout<<"  ";}
        }
        cout<<"\n";
    }
    return 0;
}