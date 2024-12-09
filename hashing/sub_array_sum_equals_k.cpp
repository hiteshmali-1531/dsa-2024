#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


// int subArraySumEqualsK(vector<int>& nums, int target){
//     int n = nums.size();
//     int count = 0;
//     for(int i=0;i<n; i++){
//         int sum = 0;
//         for(int j=i; j<n; j++){
//             sum+=nums[j];
//             if(sum == target){
//                 count++;
//             }
//         }
//     }
//     return count;
// }

int subArraySumEqualsK(vector<int>& nums, int target){
    vector<int> prefixSum(nums.size(), 0);
    unordered_map<int,int> m;
    int n = nums.size();
    int sum = nums[0];
    int count = 0;
    prefixSum[0] += nums[0];
    for(int i=1; i<n; i++){
        prefixSum[i] = prefixSum[i-1]+nums[i];
      
    }

    for(int j=0; j<n; j++){
        if(prefixSum[j] == target){
            count++;
        }
        int val = prefixSum[j] - target;
        if(m.find(val) != m.end()){
            count += m[j];
        }
           
        if(m.find(prefixSum[j]) == m.end()){
            m[prefixSum[j]] = 0;
        }
        m[prefixSum[j]]++;

        
    }

    return count;
}

int main(){
    vector<int> nums = {1, 1, 1};
    cout<<subArraySumEqualsK(nums, 2);
    return 0;
}