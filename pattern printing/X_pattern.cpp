//Calculator using Switch
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter row:";
    cin>>n;
    for(int i=1;i<=n;i++) //rows
    {
        for(int j=1;j<=n;j++) //columns
        {
            if(i==j || i+j==n+1)cout<<"*";
            else{cout<<"  ";}
        }
        cout<<"\n";
    }
    return 0;
}