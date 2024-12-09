#include<iostream>
#include<vector>
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

int main(){
    return 0;   
}