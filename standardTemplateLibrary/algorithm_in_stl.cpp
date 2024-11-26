#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comparator(int a, int b){
    return a>b;
}

bool comparePair(pair<int,int> p1, pair<int,int> p2){
    return p1.second < p2.second;
}

int main(){
    // int arr[] = {2, 4, 1 ,9, 8 , 7};
    // // vector<pair<int, int>> vec = {{3,1}, {2,1}, {7,1}, {5,2}};
    // // sort(arr, arr+6, comparator);
    // reverse(arr, arr+6);
    // for(int val : arr){
    //     cout<<val<<" ";
    // }

    // sort(vec.begin(), vec.end(), comparePair);
    // for(auto val: vec){
    //     cout<<val.first<<" "<<val.second<<endl;
    // }

    // string s = "abc";
    // next_permutation(s.begin(), s.end());
    // prev_permutation(s.begin(), s.end());


    // cout<<s<<endl;

    int a = 5; int b =6;
    swap(a, b);
    cout<<a<<endl;

    vector<int> vec = { 2, 8,3,9 ,5, 22};
    cout<<*(max_element(vec.begin(), vec.end()));

    return 0;
}
