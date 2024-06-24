#include<iostream>
usoing namespace std;
void reverseArray(int Arr[], int len){
    for(int i=0; i<len/2; i++){
        swap(Arr[i],Arr[len-i-1];)
    }
}

int main()
{
    int arr[6]={1,2,3,4,5,6};
    reverseArray(arr,len);
    cout<<arr[6]<<endl;
}