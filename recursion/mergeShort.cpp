#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr, int st, int mid, int end){
    vector<int> temp;
    int i = st;
    int j = mid+1;
    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);

            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int i=0; i<temp.size(); i++){
        arr[st+i] = temp[i];
    }
}

void mergeShort(vector<int>& arr, int st, int end){
    if(st<end){
        int mid = st + (end-st)/2;
        mergeShort(arr, st , mid);
        mergeShort(arr, mid+1, end);
        merge(arr, st, mid , end);
    }
}

int main(){
    vector<int> arr = {12, 31, 35, 8, 32, 17};
    mergeShort(arr, 0, arr.size()-1);
    for(int val : arr){
        cout<<val<<" ";
    }
    return 0;
}