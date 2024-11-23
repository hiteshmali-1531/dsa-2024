#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n){// O(n^2)

    for(int i=0; i<n-1; i++){
        bool isSwap = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]> arr[j+1]){
                isSwap = true;
                swap(arr[j], arr[j+1]);
            }
        }
        if(!isSwap){ //arrray is already sorted
            return ;
        }
    }
}

void selection_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1;j<n; j++){
            if(arr[j]< arr[min]){
                min = j;
            }
        }
            swap(arr[i], arr[min]);
    }
}

void insertion_sort(int arr[], int n){// O(n^2)
    for(int i=0; i<n-1; i++){
        int key = arr[i+1];
        int j = i;
        while(key<arr[j]&& j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        
    }
}

int main(){
    int arr[] = {4, 1, 5, 2, 3};
    // bubble_sort(arr, 5);
    // selection_sort(arr, 5);
    insertion_sort(arr, 5);
    for(int i: arr){
        cout<<i<<" ";
    }
    return 0;
}