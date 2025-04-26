#include<iostream>
using namespace std;

int vote(int x){
    if(x>18){
        cout<<"eligible for vote"<<endl;
    }
    else{
        cout<<"not eligible"<<endl;
    }
    return;
}

int main()
{
    int age;
    cout<<"enter your age : ";
    cin>>age;

    cout<<vote(age)<<endl;

    return 0;
}