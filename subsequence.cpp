#include<iostream>
using namespace std;

void printSubsequence(string str, string output, int i){
    if(i >= str.length()){
        cout<< output<<endl;
        return;
    }
    printSubsequence(str, output, i+1);

    output.push_back(str[i]);
    //output = output + str[i];

    printSubsequence(str, output, i+1);
}

int main(){
    string str = "abc";

    string output = " ";
    int i = 0;

    printSubsequence(str, output , i);
    return 0;
}