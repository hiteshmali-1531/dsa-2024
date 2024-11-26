#include<iostream>
#include<vector>
using namespace std;

int main(){
    // pair<string, int> p = {"jfklads", 5};
    // pair<int, pair<char,int>> p = {1, {'a', 3}};
    // cout<<p.first<<endl; // 1
    // cout<<p.second.first<<endl; // a
    // cout<<p.second.second<<endl; //3
    
    vector<pair<int, int>> vec = {{1,2}, {2,3}, {3,4}};

    vec.push_back({4,5});
    vec.emplace_back(5,6);

    for(pair<int, int> p: vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
    
    return 0;
}