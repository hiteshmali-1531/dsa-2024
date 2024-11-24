#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int pivot = -1;
        for(int i = n-2; i>=0; i-- ){
            if(nums[i] < nums[i+1]){
                pivot = i;
                break;
            }
        }
        if(pivot == -1){
            reverse(nums.begin() , nums.end());
            return ;
        }
        for(int i = n-1; i>=0; i--){
            if(nums[pivot]<nums[i]){
                swap(nums[pivot], nums[i]);
                break;
            }
        }
        reverse(nums.begin()+pivot+1, nums.end());

}

void printArray(vector<int> &nums){
    for(int i : nums){
        cout<<i<<" ";
    }
}

int main(){
    vector<int> arr = {3, 2, 1};
    nextPermutation(arr);
    printArray(arr);
    return 0;
}