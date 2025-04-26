#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    int c=a;
    a=b;
    b=c;
}
int main()
{
    int num1=20;
    int num2=32;
    cout<<"before swap : "<<"\n";
    cout<<num1<<" "<<num2<<"\n";

    swap(num1,num2);
    cout<<"after swap: "<<"\n";
    cout<<num1<<" "<<num2<<"\n";
    return 0;
}