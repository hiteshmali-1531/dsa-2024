#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){
    // multiset<int> ms;
    unordered_set<int> ms;
    ms.insert(1);
    ms.insert(4);
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(9);
    ms.insert(1);

    for(auto val: ms){
        cout<<val<<" ";
    }
    return 0;
}