#include<iostream>
#include<vector>
using namespace std;

int leftMostOneRow(vector<vector<int> &V){

    int leftMostOne=-1;
    int maxOneRow=-1;
    int j =V[0].size()-1;

    while(j>=0 && V[0][j]==1){
        leftMostOne=j;
        maxOneRow=0;
        j--;
    }
    for(int i=1; i<V.size(); i++){
        while(j>=0 && V[i][j]==1){
            leftMostOne=j;
            j--;
            maxOneRow=i;
        }
    }
    return maxOneRow;
}

    int maximumOnesRow(vector<vector<int> >&V){

        int maxOnes=INT8_MIN;
        int maxOnesRow=-1;
        int columns= V[0].size();
        for(int i=0; i<V.size(); i++){
            for(int j=0; j<V[i].size(); j++){
                if(V[i][j]==1){
                    int numberOfOnes = columns -j;
                    if(numberOfOnes>maxOnes){
                        maxOnes=numberOfOnes;
                        maxOnesRow=i;
                    }
                    break;
                }
            }
        }
    return maxOnesRow;
    }