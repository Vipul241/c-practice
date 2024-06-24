#include<iostream>
using namespace std;

//counting from 1 to N

void num(int a){
    for(int i=1; i<=a; i++){
        cout<<i<<" ";

    }
    cout<<endl;
    

}
int main(){
    int a;
    cout<<"Enter the value of a:"<<endl;
    num(a);
    return 0;
}


