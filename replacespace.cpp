#include<iostream>
#include<cstring> 

using namespace std;

void replaceSpace(char sentence[]) {
    int n = strlen(sentence); // Use strlen from cstring
    for (int i = 0; i < n; i++) { // Fix re-declaration of i
        if (sentence[i] == ' ') {
            sentence[i] = '@';
        }
    }
}

int main() {
    char sentence[100];
    //cin >> sentence; 
    cin.getline(sentence, 100); 
    cout << "Type the sentence" << endl;
    replaceSpace(sentence);

    cout << "After replace sentence: " << sentence << endl;
    return 0;
}
