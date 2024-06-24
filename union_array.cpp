#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //union
    int arr[] = {1,3,5,7,9};
    int size=5;
    int brr[] = {2,4,6,8};
    int siz = 4;
    vector<int> ans;
    for(int i=0; i<size; i++){
        ans.push_back(arr[i]);

    }
    for(int i=0; i<siz; i++){
        ans.push_back(brr[i]);

    }
    cout<<"Printing ans array "<<endl;
    for(int i=0; i<ans.size(); i++)
    cout<<ans[i]<< " ";

}    