#include<iostream>
#include<vector>
using namespace std;


// brute force approach 
// int maxWaterContain(vector<int> arr){
//     int n = arr.size();
//     int height = 0;
//     int width = 0;
//     int maxWater = 0;
//     for(int left = 0; left<n-1; left++){
//         for(int right = left+1; right<n ; right++){
//             height = min(arr[left], arr[right]);
//             width = right - left;
//             maxWater = max(maxWater, height*width);
//         }
//     }

//     return maxWater;
// }


int maxWaterContain(vector<int> arr){
    int n = arr.size();
    int left= 0;
    int right = n-1;
    int height = 0;
    int width = 0;
    int maxWater = 0;
    while(left<right){
        width = right - left;
        height = min(arr[left], arr[right]);
        maxWater = max(maxWater, width * height);
        if(arr[left]>arr[right]){
            right--;
        }else{
            left++;
        }
    }

    return maxWater;
}

int main(){
    vector<int> arr = {1 , 8 , 6 ,2 ,5, 4, 8,3 ,7};
    cout<<maxWaterContain(arr);
    return 0;
}