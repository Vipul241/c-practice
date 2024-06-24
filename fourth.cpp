#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{10,20,30,40,50};
    int sum=100;
    for(int i=0; i<arr.size(); i++){
        int a1 = arr[i];
        for(int j=i+1; j<arr.size(); j++){
            int a2 = arr[j];
            for(int k=j+1; k<arr.size(); k++){
                int a3 = arr[k];
                for(int p=k+1; p<arr.size(); p++){
                    int a4 = arr[p];
                    if(a1+a2+a3+a4==sum){
                        cout<<a1<<","<<a2<<","<<a3<<","<<a4<<endl;
                    }
                    //cout<<a1<<","<<a2<<","<<a3<<","<<a4<<endl;
                }
            }
        }
    }
    return 0;
    
}
