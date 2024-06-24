#include<iostream>
using namespace std;
int sum(int a, int b){
    int c=a+b;
    return 0;
}
void swap(int*a, int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int n,m;
    cout<<"Enter the value"<<endl;
    cin>>n>>m;
    //cout<<"Enter the value first"<<sum(n, m)<<endl;
    swap(&n,&m);
    cout<<"The value of a is "<<n;
    cout<<"and the value of b is "<<m<<endl;
    return 0;
}