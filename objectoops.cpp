#include <iostream>
#include <climits>
using namespace std;

int largestValue(int nums[], int size){
    int largest = INT_MIN;
    for(int i = 0; i < size; i++){
        if(largest < nums[i]){
            largest = nums[i];
        }
    }
    return largest;
}

int main(){
    int nums[] = {3, 6, 4, 9, 2, 8, 3};
    int size = sizeof(nums) / sizeof(nums[0]);
    int largest = largestValue(nums, size);
    cout << "The largest value is: " << largest <<endl;
    return 0;
}
