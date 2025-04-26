#include<iostream>
using namespace std;
int add(int n1, int n2)
{
    int ans=n1+n2;
    return ans;
}
int main()
{
    int a,b, ans;
    cout<<("enter the first number :  ")<<endl;
    cin>>a;
    cout<<("enter the second number :  ")<<endl;
    cin>>b;
    ans=add(a,b);
    cout<<("the sum of two numbers a and b is: ")<<ans<<endl;
}