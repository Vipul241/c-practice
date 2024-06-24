#include<iostream>
using namespace std;

bool isPrime(int n){
    int d=2;
    while(d<n){
        if(n%d==0){

            return false;

        }
        d++;
    }
    return true;
}

int main(){
    int l;
    cin>>l;
    for(int i=2; i<=l; i++){
        if (isPrime(i)){
            cout<<i<<endl;
        }
    }

}
/*

void main()
{
    int num,k,count+1;
    cin>>num>>k>>count;
    for(int k=2; k<=num; k++){
        if(num%k==0){
            count=count+1;
        }
        if(count==1){
            count<<"Prime";
        }
        else{
            count<<"Not Prime";
            getch();
        }

    }
}

int main(){
    int n,k, count=0;
    cout<<"Enter the value"<<endl;
    cin>>n;
    while(k<=n){
        if(k%n==0){
            count++;
        }
        k++;
    }
    return 0;
}
*/
