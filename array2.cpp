#include<iostream>
using namespace std;

int main()
{
   int arr[3][3]; 
   int brr[3][3] = {{1,2,3},{4,5,6,},{2,4,8}};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            arr[j][i] = brr[i][j];
    }
    cout<<endl;
   }
   for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<brr[i][j]<<" ";
    }
    cout<<endl;
   }
    cout << "Transpose of Matrix: " << endl;3
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";

    }
    cout<<endl;
   }
   
   /* int arr[4][3];
   int rows = 4;
   int col = 3;*/

}