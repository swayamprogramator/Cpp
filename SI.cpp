#include<iostream>
using namespace std;


class interest{
    public:
    int principal;
    int rate;
    int time;
    public:
    int si(int p,int t,int r)
    {
            printf("SI=%d",(p*r*t)/100);
    }
};
int main(){
    interest obj;
    cout<<"Enter the rate = ";
    cin>>obj.rate;
    cout<<"Enter the time = ";
    cin>>obj.time;
    cout<<"Enter the principal = ";
    cin>>obj.principal;
    obj.si(obj.principal,obj.rate,obj.time);


//OR

    /*int r,t,p,s;
    cout<<"Enter the rate = ";
    cin>>r;
    cout<<"Enter the time = ";
    cin>>t;
    cout<<"Enter the principal = ";
    cin>>p;
    s = (p*r*t)/100;
    cout<<"The simple interest = "<<s;*/
    return 0;
}