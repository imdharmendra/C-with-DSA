#include<iostream>
using namespace std;
int mmain()
{
   int array[]={3,5,6,11};
   int size=sizeof(array)/sizeof(array[0]);
   int sum=0;
   for(int i=0; i<size; i++){
    sum+=array[i];
   }

   cout<<sum<<endl;
    return 0; 
}