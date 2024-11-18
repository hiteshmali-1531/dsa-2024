#include<iostream>
#include<vector>
using namespace std;



int search_peak_index_in_mountain_array(vector<int> nums){
    int st = 0;
    int end = nums.size()-1;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
            return mid;
        }
        if(nums[mid]<nums[mid-1]){//right
            end = mid-1;
        }else{ //left
            st = mid+1;
        }
    }
    return -1;
}

int search_peak_index_in_mountain_array(vector<int> nums, int st, int end){
   if(st>end){
    return -1;
   }
   
        int mid = st + (end-st)/2;
        if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
            return mid;
        }
        if(nums[mid]<nums[mid-1]){
            return search_peak_index_in_mountain_array(nums, st, mid-1);
        }else{
            return search_peak_index_in_mountain_array(nums, mid+1, end);
        }

}



int main(){
    vector<int> arr = {0, 3, 8, 9, 5, 2};
    cout<<search_peak_index_in_mountain_array(arr)<<endl;
    cout<<search_peak_index_in_mountain_array(arr, 0, arr.size()-1);
    return 0;
}