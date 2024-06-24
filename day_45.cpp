#include<iostream>
using namespace std;

bool find(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key)
        return true;
    }
    return false;
}

int main(){
    int arr[6]={2,9,6,7,4,12};
    int size =6;
    cout<<"Enter the key to find"<<endl;
    int key;
    cin>>key;
    if(find(arr,size,key)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
}