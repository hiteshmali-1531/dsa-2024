#include<iostream>
#include<vector>
using namespace std;


int merge(vector<int>& arr, int st,int mid ,  int end){
    int i = st;
    int j = mid+1;
    vector<int> temp;
    int invCount = 0;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            invCount += mid-i+1;
            temp.push_back(arr[j]);
            j++;
        }
    }
   while (i<=mid){
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
    return invCount;

    
}
int mergeSort(vector<int>& arr, int st, int end){
    if(st<end){
        int mid = st+(end-st)/2;
        int leftInv = mergeSort(arr, st, mid);
        int rightInv = mergeSort(arr, mid+1,end);
        int invCount = merge(arr, st, mid ,end);
        return leftInv + rightInv + invCount;
    }

    return 0;
}

int main(){
    vector<int>arr = {6, 3, 5, 2, 7};
    cout<<mergeSort(arr,0, arr.size()-1);
    return 0;
}