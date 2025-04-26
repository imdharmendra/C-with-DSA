#include<iostream>
using namespace std;
int main()
{
    int n=7;
    for(int i=1; i<n+1; i++)
    {
        for(int j=1; j<n+1; j++)
        {
            cout<<j<<" ";
        }
        for(int k=1; k<i; k++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
}