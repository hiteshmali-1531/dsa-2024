#include<iostream>
#include<vector>
using namespace std;

    int search(vector<int>& nums, int target) {
        int st = 0;
        int end  = nums.size()-1;
        while(st <= end){
            int mid = st + (end- st)/2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[st]<=nums[mid]){
                if(target>=nums[st] && target<nums[mid]){
                    end = mid-1;    
                }else{
                    st = mid+1;
                }
            }else{
                if(target>nums[mid] && target<=nums[end]){
                    st = mid+1;
                }else{
                    end = mid-1;
                }
            }
        }
        return -1;
    }

int search_in_rotated_sorted_array(vector<int> nums , int target, int st, int end){
    if(st>end){
        return -1;
    }
    int mid = st + (end - st)/2;
    if(nums[mid] == target){
        return mid;
    }

    if(nums[st]<= nums[mid]){
        if(target>=nums[st]&& target<nums[mid]){
            return search_in_rotated_sorted_array(nums, target, st, mid-1);
        }else{
            return search_in_rotated_sorted_array(nums, target, mid+1, end);
        }
    }else{
       if(target>nums[mid] && target<=nums[end]){
           return search_in_rotated_sorted_array(nums, target, mid+1, end);
       }else{
           return search_in_rotated_sorted_array(nums, target, st, mid-1);
       }
    }

}

int main(){
    vector<int> nums = { 4, 5, 6, 7, 0, 1, 2};
    cout<<search_in_rotated_sorted_array(nums, 0,0, nums.size()-1);
    return 0;
}