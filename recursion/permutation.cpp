#include<iostream>
#include<vector>
using namespace std;

    void getPermute(vector<int>& nums, int idx, vector<vector<int>>& ans){
        if(idx == nums.size()){
            ans.push_back({nums});
            return ;
        }
        for(int i=idx; i<nums.size(); i++){
            swap(nums[i], nums[idx]);
            getPermute(nums, idx+1, ans);
            swap(nums[i], nums[idx]);
            

        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        getPermute(nums, 0, ans);
        return ans;
    }

int main(){
    vector<int> arr = {1,2,3};
    vector<vector<int>> perm = permute(arr);
    for(vector<int> val : perm){
        for(int item : val){
            cout<<item<<" ";
        }
        cout<<endl;
    }
    return 0;
}