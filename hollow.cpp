#include<iostream>
using namespace std;

// void holloRectangle(int totRows , int totCol){
//     for(int i=1; i<=totRows; i++){
//         for(int j=1; j<=totCol; j++){
//           if(i==1 || i==totRows || j==1 || j==totCol){
//             cout<<"*";
//           }  
//           else{
//             cout<<" ";
//           }
//           cout<<endl;
//         }
//     }
//     int main(){
//         //int a=4,b=5;
//         hollowRetangle(4,5);

//     }
// }
int main(){
   int n, m;
  cin>>n>>m;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      if(i==1||i==n||j==1||j==m){
        cout<<"*";
      }
      cout<<" "
    }
    cout<<endl;
  }
}
 
//   for(int i=0;i<5;i++){
//     for(int j=0;j<5;j++){
//       cout<<j+1;
//     }
//     cout<<endl;
//   }

