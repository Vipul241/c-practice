#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0; row<n; row++){
        //space 
        for(int col=0; col<row+1; col++){



        }
        //star
        for (int col=0; col<row+1; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    //inverted full pyramid
    for(int row=0; row<n; row++){
        //space 
        for(int col=0; col<row; col++){
            cout<<" ";
        }
    }
}