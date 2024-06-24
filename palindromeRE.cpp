#include<iostream>
using namespace std;

bool isPalindrome(string s, int start, int end){

    if(s[start]>=s[end]){
        return true;
    }
    if(s[start] != s[end]){
        return false;
    }
    return isPalindrome(s, start+1, end-1);
}

int main(){
    string s = "vipul";
    // cin>>s;
    int start=0;
    cout<<isPalindrome(s, start, s.size()-1)<<endl;
}