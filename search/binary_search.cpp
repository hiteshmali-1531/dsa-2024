#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int tar){
    int st = 0, end = arr.size()-1;
    while(st <= end){
        // int mid = (st+end)/2;
        int mid = st + (end-st)/2;
        if(tar > arr[mid]){
           st = mid+1; 
        }else if(tar < arr[mid]){
            end = mid-1;
        }else{
            return mid;
        }
    }
    return -1;
}


int recursive_binary_search(vector<int> arr, int tar , int st, int end){
    int mid = st + (end-st)/2;
    if(tar>arr[mid]){
        return recursive_binary_search(arr, tar, mid+1, end);
    }else if(tar<arr[mid]){
        return recursive_binary_search(arr, tar , st, mid-1);
    }else{
        return mid;
    }
}

int main(){
    vector<int> arr= { 1 ,3, 9, 11, 32};
    cout<<binarySearch(arr, 32)<<endl;
    cout<<recursive_binary_search(arr, 9, 0, arr.size()-1);

    return 0;
}