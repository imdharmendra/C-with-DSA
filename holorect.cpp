#include<iostream>
using namespace std;
int main()
{
    int h=4,w=6;
    for(int i=0; i<=h; i++)
    {
        cout<<endl;
    }
    for(int j=0; j<=w; j++)
    {
        if(i==0||i==h-1||j==0||j==w-1){
        cout<<"*";
        }
        else{
        cout<<" ";
        }
    }
}
