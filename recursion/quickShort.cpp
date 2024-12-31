#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

int partition(vector<int>& arr, int st, int end){
    int idx = st-1;
    int j = st;
    int pivot = arr[end];
    for( j = st; j<end; j++){
        if(arr[j]<=pivot){
            idx++;
            swap(arr[j], arr[idx]);
        }
    }

    idx++;
    swap(arr[idx], arr[end]);
    return idx;
}

void quickShort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int idx = partition(arr, st, end);
        quickShort(arr, st, idx - 1);
        quickShort(arr, idx + 1, end);
    }
}

int main()
{
    vector<int> arr = {1, 5, 3, 2, 9, 11};
    int end = arr.size()-1;
    quickShort(arr,0, end);
    for(int val: arr){
        cout<<val<<" ";
    }
    return 0;
}