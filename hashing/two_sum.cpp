#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

// vector<int> twoSum(vector<int>& nums, int target){
//     vector<int> ans;
//     for(int i=0; i<nums.size()-1; i++){
//         int first = nums[i];
//         for(int j=i+1; j<nums.size();j++){
//             if(first+nums[j] == target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 break;
//             }
//         }
//     }
//     return ans;
// }

vector<int> twoSum(vector<int>& nums, int target){
    vector<int> ans;
    sort(nums.begin(), nums.end());
    int st = 0;
    int end = nums.size()-1;
    while(st<end){
        int first = nums[st];
        int second = nums[end];
        if(target == (first+second)){
            
            break;
        }else if(target>(first+second)){
            st++;
        }else{
            end--;
        }
    }
    return ans;
}

// vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int,int> m;
//         vector<int> result ;
//         for(int i=0; i<nums.size(); i++){
//             int first = nums[i];
//             int second = target - first;
//             if(m.find(second) != m.end()){
//                 result.push_back(i);
//                 result.push_back(m[second]);
//                 break;
//             }
//             m[first] = i;
//         }
//         return result;
//     }

int main(){
    // vector<int> nums = {2, 7, 11, 15};
    vector<int> nums = {3, 2, 4};
    vector<int> ans = twoSum(nums, 6);
    for(int i: ans){
        cout<<i<<" ";
    }
    return 0;
}