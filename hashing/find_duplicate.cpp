#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int findDuplicate(vector<int>& nums){
    unordered_set<int> s;
    for(int i=0; i<nums.size(); i++){
        if(s.find(nums[i]) != s.end()){
            return nums[i];
        }
        s.insert(nums[i]);
    }
    return -1;
}
// int findDuplicate(vector<int>& nums) {
//         int slow = nums[0];
//         int fast = nums[0];
//         do{
//             slow = nums[slow]; // +1;
//             fast = nums[nums[fast]]; //+2;

//         }while(slow != fast);
//         slow = nums[0];
//         while(slow != fast){
//             slow = nums[slow];
//             fast = nums[fast];
//         }
//         return slow;
// }
int main(){
    vector<int> arr = {1,3,4,2,2};
    cout<<findDuplicate(arr);
    return 0;
}