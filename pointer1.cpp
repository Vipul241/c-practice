#include<iostream>
#include<vector>
using namespace std;
// void update(int p){
    
// }

// void solve(int a){
//     a++;

// //     *ptr = *ptr +1;
// }


// void printCount(int n){
//     // cout<<"Function is called for n"<<n<<endl;

//     if(n==0){
//         return;
//     }
   
    

//     // int ans = n*factorial(n-1);
//     // return ans;
//     printCount(n);
//     // cout<< n <<" ";
// }

// int fab(int n){
//     if(n==1){
//         return 0;
//     }
//     if(n==2){
//         return 1;
//     }

//     int ans = fab(n-1) + fab(n-2);
//     return ans;
// }

// void countStairs(int n){
//     if(n==0 || n==1){
//         return 1;
//     }

//     int asn = countStairs(n-1)+countStairs(n+2);
//     return asn;
// }

// void maxCount(int arr[], int i,maxi, int n){
//     int maxi= INT_MIN;
//     for(int i=0; i<n; i++){
//         if(arr[i]>maxi)
//         maxi= arr[i];
//         cout<<maxi;
//     }
// }

// void checkKey(string& str, int i, int& n, char& key){
//     if(i>=n){
//         return;
//     }
//     if(str[i]==key){
//         cout<<"found at:" <<i<<endl;
//     }
//     return checkKey(str, i+1, n, key)
// }

// bool checkSorted(vector<int> &arr, int& n, int i){
//     if(i==n-1){
//         return true;
//     }
//     if(arr[i+1]< arr[i])
//     return false;

//     return checkSorted(arr, n, i+1)
// }

// void lastOccLTR(string&s, char x,int i, int&ans){
//     if(i>=s.size()){
//         return;
//     }
//     if(s[i]==x){
//         ans=i;
//     }
//     lastOccLTR(s, x, i+1, ans);

// }


void printSubarray(vector<int>&nums, int start, int end){
    // if(end== nums.size()){
    //     return;
    // }
    for(int i = start; i<=end; i++){
        cout<<nums<<" ";
    }
    cout<<endl;
    printSubarray(nums, start, end+1);
}


int main(){
    vector<int>nums{1,2,3,4,5};

    printSubarray(nums,0, 0,);
    return 0;



    // string s;
    // cin>>s;
    // char x;
    // cin>>x;

    // int ans = -1;
    // lastOccLTR(s,x,0,ans);

    // cout<<ans<<endl;




    // vector<int>arr{1,2,3};

    


    // vector<int>v{10,20,52,63,42,8}

    // int n = v.size();
    // int i = 0;
    // bool isSorted = checkSorted(v, n, i);

    // if(isSorted){
    //     cout<<"Array is sorted"<<endl;
    // }else{
    //     cout<<"Array is not sorted"<<endl;
    // }
    // string str = "vipulkumar";

    // int n = str.length();

    // char key = 'u';

    // checkKey(str, n, i, key);
    // int n;
    // cin>>n;

    // cout<<"Enter the number"<<endl;

    // int ans = maxCount(n);

    // cout<<ans;

    // int ans = countStairs(n);

    // cout<<"Answer "<< ans<<endl;
    // cout<<"Fab number "<<endl;

    // int asn = fab(n);
    // cout<<asn<<endl;

    // int a=6;

    // cout<<&a<<endl;


    //Pointer creation

    // int a = 5;

    //  //ponter create
    // //  int *ptr = &a;
    //  cout<<sizeof(ptr)<<endl;

    // char name[10] = "vipul";
    // char *c = &name[0];
    // cout<<name<<endl;
    // cout<<&name<<endl;
    // cout<<*(name+3)<<endl;
    // cout<<c<<endl;
    // cout<<&c<<endl;
    // cout<<*(c+3) <<endl;
    // cout<<c+2<<endl;
    // cout<<*c<<endl;
    // cout<<c+5<<endl;    


    // char ch = 'k';
    // char *cptr = &ch;


    // cout<<cptr<<endl;   

    // int a =5;

    // int &p = a;
    // int** q = &p;

    // solve(a);
    // cout<<a<<endl;


    // cout<<a<<endl;
    // cout<<p<<endl;
    // cout<<&p<<endl;
    // cout<<*p<<endl;
    // cout<<q<<endl;
    // cout<<&q<<endl;
    // cout<<*q<<endl;
    // cout<<**q<<endl;
    // int n;
    // cout<<"Enter the value of n "<<endl;
    // cin>>n;

    // // int ans = 
    // printCount(n);
    // return 0;

    // cout<<"fectorial  "<<ans<<endl;

}