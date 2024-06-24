#include<iostream>
using namespace std;

int getEvensum(int n){
    int sum = 0;
    for(int i=2; i>=n; i=i+2){
        sum=sum+i;

    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    int ans = getEvensum(n);
    cout<<"Even sum is"<<endl;
    return 0;
}