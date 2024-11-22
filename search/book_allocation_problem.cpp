#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int>& arr, int n, int m, int maxAllowed){
    int student = 1;
    int page = 0;
    for(int i=0 ; i<n; i++){
        if(arr[i] > maxAllowed){
            return false;
        }
        if(page + arr[i] <= maxAllowed){
            page += arr[i];
        }else{
            student++;
            page = arr[i];
        }
    }
    if(student>m){
        return false;
    }else{
        return true;
    }
    
}

int allocateBooks(vector<int> &arr, int n, int m){
    if(m>n){
        return -1;
    }
    int ans = -1;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    int st = 0, end = sum;
    while(st<=end){
        int mid = st +(end-st)/2;
        if(isValid(arr,n, m, mid)){
            ans = mid;
            end = mid - 1;
        }else{
            st = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {15, 17, 20};
    int n = 3, m = 2;
    cout<<allocateBooks(arr, n, m);


    return 0;
}