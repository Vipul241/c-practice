#include<iostream>
#include<vector>
using namespace std;
int main(){
    //sort 0 and 1
    vector<int> arr{0,1,0,0,1,0,0,1};
    int start = 0;
    int end = arr.size() -1;
    int i = 0;
    while(i !=end){
        if(arr[i]==0){
            swap(arr[start],arr[i]);
            i++;
            start;
        }
        else{
        //if(arr[i]==1){
            //swap from right 
            swap(arr[end], arr[i]);
            end--;
            //i++;
        }
    }
    for(auto value: arr){
        cout<<value<<" ";

    }


}