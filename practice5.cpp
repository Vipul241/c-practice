#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;

    while(start<=end){
        int element=arr[mid];\
        if(element==key){
            return mid;
        }
        else if(key<element){
            end = mid+1;

        }
        else{
            start = mid+1;
        }
        mid= (start+end)/2

    }
    return -1;

}


int main(){
    int arr[]={2,4,7,10,15,19,21};
    int  size=6;
    int key=4;
    int indexOftarget=binarySearch(arr,size,key);
    if(indexOftarget==-1){
        cout<<"Key not found"<<endl;
    }
    else{
        cout<<"Key found at "<<indexOftarget<<endl;
    }
    return 0;
}