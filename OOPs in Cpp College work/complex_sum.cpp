#include<iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
    complex(int x,int y){
        real=x;
        img=y;
    }
    
    void add_complex(complex c1,complex c2){
        real=c1.real + c2.real;
        img=c1.img + c2.img;
    }
    void print(){
        cout<<real<<" + i"<<img<<endl;
    }

};
int main(){
    complex a(2,3);
    a.print();
    complex b(1,2);
    b.print();
    complex c(0,0);
    c.add_complex(a,b);
    c.print();
    return 0;
}