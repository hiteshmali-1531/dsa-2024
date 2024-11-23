#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool isPossible(vector<int> &arr, int m, int n, int minAllowed){
   
    int cows = 1;
    int lastPos = arr[0];
    for(int i=1; i<n ; i++){
       
        if((arr[i] - lastPos) >= minAllowed){
            
            cows++;
            lastPos = arr[i];
        }
        if(cows == m){
            return true;
        }

    }
    return false;
   
}

int aggressive_cows(vector<int> &arr , int m, int n){
    sort(arr.begin(), arr.end());
    int st = 1;
    int max = arr[n-1] - arr[0];
    
    int end = max - 1;
    int ans = -1;
    while(st <= end){
        int mid = st + (end-st)/2;
        if(isPossible(arr, m, n, mid)){
            ans = mid;
            st = mid+1;
        }else{
            end = mid-1;
        }

    }
    return ans;
}

int main(){
    vector<int> arr = {1, 2, 8, 4, 9};
    cout<<aggressive_cows(arr, 3, arr.size());
    return 0;
}