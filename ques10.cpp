#include<iostream>
using namespace std;
 bool prime(int x){
    for(int i=2; i<=x; i++){
        if(x%i==0){
            return false;
        }
        else{
            return true;
        }
    }
 }
 int main(){
    int n;
    cout<<"enter last digit : ";
    cin>>n;

    for(int i=2; i<=n; i++){
        if(prime(i)){
            cout<<i<<" ";
        }
    }
 }