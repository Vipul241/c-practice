#include<iostream>
#include<limits.h>
using namespace std;
int getMax(int arr[], int rows, int cols){
    int maxi = INT_MIN;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j]>maxi){
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}

int main()
    {
        
        cout<<getMax(arr,rows,cols);
        return 0;


    }
