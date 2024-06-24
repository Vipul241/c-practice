#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int cond = i<=n/2 ? 2*i : 0;
        for(int j=0; j=cond; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}