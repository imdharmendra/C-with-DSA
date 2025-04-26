#include<iostream>
using namespace std;

int add(int num1, int num2){
    int sum=num1+num2;
    return sum;
}

float add(float num1, float num2){
    float sum=num1+num2;
    return sum;
}
int main()
{

int a=3, b=9;
cout<<add(a,b)<<endl;

float c=9.99, d=6.33;
cout<<add(c,d);
}