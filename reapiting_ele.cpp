#include<iostream>
using namespace std;
int firstRepeated(int a[], int n){
    unordered_map<int, int hash;
    for(int i=0; i<n-1; i++){
        hash[a[i]]++;
    }
    for(int i=0; i<n; i++){
        if(hash[a[i]]>1){
            return i+1;
        }
    }
    return -1;
}

int main(){
    
}