#include<iostream>
using namespace std;
class time{
    int hr;
    int min;
    int sec;
    public:
    time(int h,int m,int s){
        hr=h;
        min=m;
        sec=s;
    }
    void hour_sum(time t1,time t2){
        sec=(t1.sec+t2.sec)%60;
        min=((t1.sec+t2.sec)/60 + (t1.min + t2.min)%60)%60;
        hr=(((t1.sec+t2.sec)/60 + (t1.min + t2.min))/60 + (t1.hr + t2.hr)%24)%24;
        
    }
    void print(){
        cout<<hr<<":"<<min<<":"<<sec<<endl;
    }

};
int main(){
    time t1(11,37,50);
    t1.print();
    time t2(23,37,50);
    t2.print();
    time t3(0,0,0);
    t3.hour_sum(t1,t2);
    t3.print();
    return 0;
}