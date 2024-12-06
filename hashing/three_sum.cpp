#include<iostream>
#include<set>
#include<vector>
#include<algorithm>

using namespace std;
// brue force approach 
// vector<vector<int>> threeSum(vector<int>& nums){
//     int n = nums.size();
//     vector<vector<int>> ans;
//     set<vector<int>> s;
    
//     for(int i=0; i<n; i++){
//         for(int j= i+1; j<n ;j++){
//             for(int k= j+1; k<n; k++){
//                 if(nums[i]+nums[j]+nums[k] == 0){
//                     vector<int> triplet = {nums[i], nums[j], nums[k]};
//                     sort(triplet.begin(), triplet.end());
//                     if(s.find(triplet) == s.end()){
//                         s.insert(triplet);
//                         ans.push_back(triplet);
//                     }
//                 }
//             }
//         }
//     }
//     return ans;
// }

vector<vector<int>> threeSum(vector<int>& nums){
    int n = nums.size();
    // vector<vector<int>> ans;
    set<vector<int>> uniqueTriplet;
    for(int i=0 ;i<n; i++){
        int tar = -nums[i];
        set<int> s;
        for(int j=i+1; j<n; j++){
            int toFind = tar - nums[j];
            if(s.find(toFind) != s.end()){
                vector<int> trip ={nums[i], nums[j],toFind};
                sort(trip.begin(), trip.end());
                uniqueTriplet.insert(trip);
            }

            s.insert(nums[j]);
        }

    }
    vector<vector<int>> ans(uniqueTriplet.begin(), uniqueTriplet.end());
    return ans;
}


// optimal approach
vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans; 
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }
            int j = i+1;
            int k = n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum>0){
                    k--;
                }else if(sum<0){
                    j++;
                }else{
                    vector<int> v = {nums[i], nums[j],nums[k]};
                    j++;
                    k--;
                    ans.push_back(v);
                    while(j<k && nums[j] == nums[j-1]){
                        j++;
                    }
                }
            }
        }
    return ans;
    }

int main(){
    vector<int> vec ={-1, 0, 1,2,-1,-4};
    vector<vector<int>>ans = threeSum(vec);

    for(vector<int> val : ans){
        for(int key : val){
            cout<<key<<" ";
        }
        cout<<endl;
    }
    return 0;
}