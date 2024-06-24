#include<iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}
int sum(int a,int b,int c){
    return a+b+c;
}
int main()
{
    cout<<"The sum of 3 and 8 is "<<sum(3,8);
    cout<<endl;
    cout<<"The sum of 3 and 8 is "<<sum(5,6,7)<<endl;

}