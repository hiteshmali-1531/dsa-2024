#include<iostream>
#include<vector>
using namespace std;

int maxSumOfSubArr(vector<int> vec, int n){
    int maxSum = INT_MIN ;
    for(int st = 0; st<n ; st++){
    int currSum = 0;
        for(int end = st; end<n; end++){
            currSum += vec.at(end);
            maxSum = max(currSum, maxSum);
        }
    }

    return maxSum;
}

int main(){
    vector<int> vec = {3, -4, 5, 4, -1, 7, -8};

    int n = 7;

    // print subArray
    // for(int st = 0; st<n; st++){
    //     for(int end = st; end<n; end++ ){
    //         for(int i=st; i<end; i++){
    //             cout<<vec.at(i);
    //         }
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    cout<<maxSumOfSubArr(vec, n);

    
}