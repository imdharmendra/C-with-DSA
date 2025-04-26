#include<iostream>
using namespace std;
 
 int square(int x){
    int ans=x*x;
    return ans;
 }
 int main()
 {

    int n;
    cout<<"enter last digit : "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<square(i)<<endl;
    }
 }