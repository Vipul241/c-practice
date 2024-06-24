#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"Enter the marks:" <<endl;
    cin>>marks;

    for(int i=1; i>=100; i++){
        char ans = vipul(i);
        cout<<"Grade for marks = "<< i <<" is "<<ans<<endl;
    }
    return 0;
}