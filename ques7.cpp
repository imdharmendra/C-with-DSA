#include<iostream>
using namespace std;
int area(double r){
    double ans=3.14*r*r;
    return ans;
}
int circum(double r){
    double ans =2*3.14*r;
    return ans;
}
int main()
{
    double n;
    cout<<"enter the radius : "<<endl;
    cin>>n;

    cout<<"Area of circle is : "<<area(n)<<endl;
    cout<<"circumfrence of circle is : "<<circum(n)<<endl;

}