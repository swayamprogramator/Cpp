//Calculator using Switch
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int r,i=0;
    cout<<"Enter row:";
    cin>>r;
    for(i=0;i<r;i++){
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        for(int j=0;j<=r-i-1;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}