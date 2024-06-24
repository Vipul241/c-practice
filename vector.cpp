#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //create vector
    vector<int> arr;
    int ans=(sizeof(arr)/sizeof(int));
    cout<<ans<<endl;

    cout<<arr.size() <<endl;
    cout<<arr.capacity() <<endl;
    arr.push_back(5);
    arr.push_back(6);
    for(int a=0; a<arr; a++){
        cout<<arr[a]<<" ";
    }
    cout<<endl;
    return 0;
}