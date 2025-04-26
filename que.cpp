#include<iostream>
using namespace std;
int main()
{
    int a[5]={2,4,6,8,9};
    int key=8;
    int ans=-1;

    for(int i=0; i<5; i++)
    {
        if(a[i]==key) ans=i;
    }
    cout<<ans<<endl;
}