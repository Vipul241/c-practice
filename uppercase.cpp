#include<iostream>
#include<cstring>
using namespace std;


void convertUppercase(char arr[]){
    int n=strlen(arr);
    for(int i=0; i<n; i++){
        arr[i] = arr[i]-'a'+'A';
    }
}
int main(){
    char ann[100]="vipul";
    convertUppercase(ann);
    cout<<ann<<endl;
}