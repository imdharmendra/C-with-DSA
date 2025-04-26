#include<iostream>
using namespace std;
int main()
{
    int x=18;
    float y=8.8;

    int *ptr=&x;
    cout<<"address in the ptr :"<<ptr<<"\n";
    cout<<"value stored of the adderss in ptr :"<<*ptr<<"\n";

    float *ptrf=&y;
    cout<<"address in the ptrf :"<<ptrf<<"\n";
    cout<<"value stored of the adderss in ptr :"<<*ptrf<<"\n";

    *ptr=50;
    cout<<"new value of x is :"<<x<<"\n";
    cout<<"new value stored of the address in ptr is :"<<*ptr<<"\n";

    return 0;
}