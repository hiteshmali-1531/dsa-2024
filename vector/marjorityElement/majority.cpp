#include<iostream>
#include<vector>

using namespace std;

// vector<int> pairSum(vector<int> nums , int target){
//     int n= nums.size();
//     vector<int>ans;
//     for(int i =0; i<n ; i++){
//         for(int j=i+1; j<n; j++){
//             if(nums.at(i) + nums.at(j) == target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//             }
//         }
//     }

//     return ans;

// }

// optimal
vector<int> pairSum(vector<int> nums , int target){
    int n= nums.size();
    int j = n-1;
    int i=0;
    vector<int>ans;
  
    while(i<j){
        int ps = nums.at(i) + nums.at(j);
        if(ps < target){
            i++;
        }else if(ps > target){
            j--;
        }else{
            ans.push_back(i);
            ans.push_back(j);
           return ans;
        }
    }
    return ans;

}

// brut force approach
 int majorityElement(vector<int>& nums) {
         for(int val : nums){
            int freq=0;
            for(int elem : nums){ 
                if(val == elem){
                    freq++;
                }
            }
            if(freq>nums.size()/2){
                return val;
            }
         }
         return -1;
    }

// sorting 

    // int majorityElement(vector<int>& nums) {
    //      sort(nums.begin(), nums.end());
    //      return nums[nums.size()/2];
    // }



// optimal approach
     int majorityElement(vector<int>& nums) {
        int ans = 0;
        int freq = 0;
        for(int i=0; i<nums.size(); i++){
            if(freq == 0){
                ans = nums[i];
            }
            if(ans == nums[i]){
                freq++;
            }else{
                freq--;
            }
        }
        return ans;
    }
int main(){
    vector<int> nums = {2, 7 ,11, 15};
    int target = 13;

    vector<int> ans = pairSum(nums,target);
    cout<<ans[0]<<" , "<<ans[1]<<endl;
    return 0;
}
