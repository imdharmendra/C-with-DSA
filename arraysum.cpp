#include<iostream>
#include <vector>
using namespace std;
int main(){
    int array[]={1,2,3,4,5,6};

    int anssum=0;
    for(int i=0; i<6; i++){
        if(i%2==0){
            anssum+=array[i];
        }
        else{
            anssum-=array[i];
        }

    }
    cout<<anssum<<endl;
}