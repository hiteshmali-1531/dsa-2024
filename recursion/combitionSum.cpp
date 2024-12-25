#include<iostream>
#include<vector>
#include<set>
using namespace std;

void helper(vector<int>& candidates, vector<vector<int>>& ans, int target , int idx, vector<int>& combSum ,         
                    set<vector<int>>& s){
        
        if(target == 0){
            if(s.find(combSum) == s.end()){
            ans.push_back({combSum});
            s.insert({combSum});
            }
            return ;
        }
        if(target<0 || idx>=candidates.size()){
            return ;
        }
        combSum.push_back(candidates[idx]);
        helper(candidates, ans, target-candidates[idx], idx+1,combSum,s);
        helper(candidates, ans, target-candidates[idx],idx,combSum,s);
        combSum.pop_back();
        helper(candidates, ans, target, idx+1, combSum,s);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        set<vector<int>> s;
        vector<vector<int>> ans;
        vector<int> combSum;
        helper(candidates, ans, target, 0, combSum,s);
        return ans;
    }

int main(){
    return 0;
}