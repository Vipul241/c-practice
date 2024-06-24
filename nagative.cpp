#include<iostream>
using namespace std;

void moveAll(int*arr, int n){
    int l=0,h=n-1;
    while (l<h)
    {
        if(arr[l]<0){
            l++;
        }
        else if(arr[h]>0){
            h--;
        }
        else{
            swap(arr[l], arr[h]);
        }
    }
    
}

int main(){
    int arr[]={-1,-5,-2,5,-2,-9};
    int n=sizeof(arr)/sizeof(int);
    moveAll(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}