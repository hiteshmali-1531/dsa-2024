#include<iostream>
#include<vector>
#include<algorithm>
#include<array>
using namespace std;


int fib(int n){
    if(n == 1 || n==0){
        return n;
    }
    return fib(n-1) + fib(n-2);
}

bool isSorted(int arr[], int n){
    if(n==1||n==0){
        return true;
    }

    return arr[n-1]>=arr[n-2]&&isSorted(arr,n-1);
}

bool isSorted(int arr[], int i, int n){
    if(i == n -1){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    return isSorted(arr,i+1, n);
}

int main(){
    int arr[] = {1,2,3,2};
    int n = sizeof(arr)/ sizeof(arr[0]);
    cout<<isSorted(arr, 0, n);
    
    return 0;   
}