#include<iostream>
using namespace std;
int hcf(int a, int b){
    if(b>a)return hcf(b,a);
    if(b==0)return a;
    return hcf(b,a%b);
}
int main(){
    int x=hcf(40,48);
    cout<<x<<"\n";
    return 0;
}