#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> &arr, int n , int m, int maxAllowed){
    int painter  = 1;
    int time = 0; 
    for(int i=0; i<n ; i++){
        if(arr[i] > maxAllowed){
            return false;
        }
        if(time + arr[i] <= maxAllowed){
            time += arr[i];
        }else{
            painter++;
            time = arr[i];
        }
    }

    if(painter>m){
        return false;

    }else{
        return true;
    }

}

int painter_partition(vector<int> &arr, int n, int m ){
    int ans = -1;
    int sum =0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    int st = 0;
    int end = sum;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(isValid(arr, n , m , mid)){
            ans = mid;
            end = mid - 1;

        }else{
            st = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {40, 30, 10, 20};
    cout<<painter_partition(arr, arr.size(), 2);
    return 0;
}