#include<iostream>
using namespace std;

void changeArr(int marks[], int size){
    for(int i=0; i<size; i++){
        marks[i] = marks[i] *2;
    }
}

void reverse(int marks[], int size){
    int start = 0; 
    int end = size-1; 
    while(start <end){
        swap(marks[start], marks[end]);
        start++;
        end--;
    }

}
int main(){
    int size = 5;
    int marks[size] = {99, 100 , 55, 37, 88};

    reverse(marks, sizeof(marks)/ sizeof(int));
    
    for(int m : marks){
        cout<<m<<endl;
    }

    // for(int i=0; i<size; i++){
    //     cin>>marks[i];
    // }

    // for(int i=0; i<size; i++){
    //     cout<<marks[i]<<endl;
    // }

    // int smallest = INT_MAX;
    // int largest = INT_MIN;

    // for(int i=0; i<size ;i++){
    //     // if(min > marks[i]){
    //     //     min = marks[i];
    //     // }

    //     smallest = min(smallest, marks[i]);
    //     largest = max(largest, marks[i]);
    // }

    // cout<<"smallest = "<<smallest<<endl;
    // cout<<"largest = "<<largest<<endl;


    // Call by Reference 
    // int arr[] = {1,2 , 3};
    // changeArr(arr, sizeof(marks)/sizeof(int));
    // for(int i : arr){
    //     cout<<i<<" ";
    // }


    return 0;
}