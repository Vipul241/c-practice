#include<iostream>
#include<vector>
using namespace std;
int main(){

class solution{
    void sortColors(vector<int>arr){
       // sort(nums.begin(),nums.end());
       int zero, one, two;
       zero=one=two=[];
       for(int i=0; i<rows.size(); i++){
        if(nums[i]==0){
            zero++;
        }
        else if(nums[i]==1){
            one++;
        }
        else{
            two++;
        }
       }
       int i=0;
       while(zero--){
        nums[i]=0;
        i++
       }
       int i=1;
       while(one--){
        nums[i]=1;
        i++;
       }
       int i=2;
       while(two--){
        nums[i]=2;
        i++
       }
    }
};
}


//int main()
//{
    

//}