#include<iostream>
#include<vector>
using namespace std;

//brute force Approach 

// vector<int> productOfArray(vector<int> arr){
//     int n = arr.size();
//     vector<int> ans;
//     int product = 1;

//     for(int i=0; i<n; i++){
//         product = 1;
//         for(int j= 0; j<n; j++){
//             if( i == j){
//                 continue;
//             }
//             product *= arr[j];


//         }

//         ans.push_back(product);
//     }


 
//     return ans;
// }
vector<int> productOfArray(vector<int> arr){
    int n = arr.size();
    vector<int> ans;
    vector<int> prefix;
    int suffix[n] ;
    int product = 1;

    for(int i=0; i<n; i++){
        product *= arr[i];
        prefix.push_back(product);
    }

    product = 1; 
    for(int i=n-1 ; i>=0; i--){
        product *= arr[i];
        suffix[i] = product;
    }
    int pre ;
    int suff;
    for(int i=0; i<n; i++){
        pre = 1;
        suff = 1;   
        if(i>0){
            pre = prefix[i-1];

        }
        if(i != n-1){
            suff = suffix[i+1];
        }
        
       ans.push_back(pre*suff);
    }


 
    return ans;
}


 vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 1);
   
    int suffix = 1;
    
    for(int i=1; i<n; i++){  
        
        ans[i] = ans[i-1] * nums[i-1];
    }

   
    for(int i=n-2 ; i>=0; i--){
        suffix *= nums[i+1];
       ans[i] *= suffix;
    }
    

 
    return ans;
    }

int main(){
    vector<int> arr = {1, 2, 3, 4};

    vector<int> ans = productOfArray(arr);


   for(int i : ans){
    cout<<i<<" ";
   }
    return 0;
}