#include<iostream>
#include<vector>
using namespace std;

void sort_color(vector<int>& nums) {
        int n = nums.size();
        int low , mid , high ;
        high = n-1;
        low = 0;
        mid = 0;

        while(mid<=high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                mid++;
                low++;
            }else if(nums[mid] == 1){

                mid++;
            }else{
                swap(nums[mid],nums[high]);
                high--;
                
            }
        }
    }

// void sort_color(vector<int> &nums){
//     int count0, count1, count2;
//     count0 = count1 = count2 = 0;
//     for(int i=0; i<nums.size(); i++){
//         if(nums[i] == 0){
//             count0++;
//         }else if(nums[i] == 1){
//             count1++;
//         }else{
//             count2++;
//         }
//     }
//     int idx = 0;
//     while(count0>0){
//         nums[idx] = 0;
//         count0--;
//         idx++;
//     }
//     while(count1>0){
//         nums[idx] = 1;
//         count1--;
//         idx++;
//     }
//     while(count2>0){
//         nums[idx] = 2;
//         count2--;
//         idx++;
//     }
// }

void printArray(vector<int> &nums){
    for(int i: nums){
        cout<<i<<" ";
    }
}

int main(){
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sort_color(nums);
    printArray(nums);

    return 0;
}