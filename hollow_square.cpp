#include<iostream>
using namespace std;
int product(int m,int n){
    return m*n;
} 

int main(){
    int a,b;
    cout<<"Enter the value of a and b ";
    cin>>a>>b;
    cout<<"The product of a and b is ">>product(a,b);
    return 0;
} 