#include<iostream>
using namespace std;
int main()
{
    //cout<<"hello world !";
    int row,col;
    cin>>row>>col;
    for(int i=0; i<=row; i++){
        for(int j=0; j<=i; j++){
           if(i==1 || i==row || j==1 || j==col){
            cout<<"* ";
           }
           //cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}