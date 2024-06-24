#include<iostream>
using namespace std;
/*
 int fectorial(int n){
    if(n==0)
        return 1;
        int chotti=factorial(n-1);
        int baddi=n*chotti;
     return n;//factorial(n-1);
    
 }

int main(){
    int n;
    cin>>n;
    int ans = factorial(n);
    cout<<ans<<endl;
    return 0;
}
*/
int power(int n){
    //base case
    if(n == 0)
    return 1;
    //recursive relation
    int smallerProblem = power(n-1);
    int biggerProblem = 5*smallerProblem;
    return biggerProblem;
}

int main(){
    int n;
    cin>>n;
    int ans = power(n);
    cout<<ans<<endl;
}
