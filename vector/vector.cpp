#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int> vec){
    int ans = 0;
    for(int val : vec){
        ans ^= val;
    }
    return ans;
}

int main(){
    // vector<int> vec = {1, 2, 3};
    // vector<int>vec(5,0);
    // vector<char> vec = {'A','B','C'};
    // vector<char> vec;
    // vec.push_back('A');
    // vec.push_back('B');
    // vec.push_back('C');
    // vec.push_back('D');
    // vec.push_back('E ');

    // vec.pop_back();
    // cout<<vec.at(0)<<endl;
    // cout<<vec.front()<<endl;
    // cout<<vec.back()<<endl;
    // for(char val :vec){
    //     cout<<val<<endl;
    // }
    // cout<<"capacity : "<<vec.capacity()<<endl;

    // cout<<"size : "<<vec.size()<<endl;

    vector<int>vec = {1, 4, 1};
    cout<<singleNumber(vec);
}