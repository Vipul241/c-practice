#include<iostream>
using namespace std;


// int getLength(char name[]){
//     int length=0;
//     int i=0;
//     while(name[i] != '\0'){
//         length++;
//         i++
//     }
//     return length;
// }

// int main(){
//     char name[100];
//     cin<<name;
//     //cout<<"length is:"<<getLength(name)<<endl;
//     cout<<"length is-->"<<strlen(name)<<endl;
//     // int arr[100];
//     // cin>>arr;
//     // for(int i=0; i<7; i++){
//     //     cout<<"index"<<i<<" "<<arr[i]<<endl;
//     // }
// //     char arr[100];
// //     cin.getline(arr,50)
// //     cout<<arr;
//      return 0;
//  }


#include <cstring> // for strlen

using namespace std;

void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

int getLength(char name[]) {
    return strlen(name);
}

void charArray(char name[]) {
    int n = getLength(name);
    int i = 0;
    int j = n - 1;
    while (i <= j) {
        swap(name[i], name[j]);
        i++;
        j--; // fix increment to decrement
    }
}

int main() {
    char name[100];
    cin >> name;

    cout << "Initially: " << name << endl;
    charArray(name); // fix function name
    cout << "After reversal process: " << name << endl;

    return 0;
}

