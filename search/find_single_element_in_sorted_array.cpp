#include<iostream>
#include<vector>
using namespace std;

int find_single_element_in_sorted_array(vector<int> nums){
    int st = 0;
    int end = nums.size()-1;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(mid == 0 && nums[0] != nums[1]){
            return nums[mid];
        }
        if(mid == nums.size()-1 && nums[nums.size()-1] != nums[nums.size()-2]){
            return nums[mid];
        }
        if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
            return nums[mid];
        }
        if((mid) % 2 == 0){  //even
            if(nums[mid-1] == nums[mid]){//left

            end = mid-1;
            }else{
            st = mid+1;

            }
        }else{
            if(nums[mid-1] == nums[mid]){//right
                st = mid + 1;
            }else{
                end = mid -1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    cout<<find_single_element_in_sorted_array(arr)<<endl;

    return 0;
}