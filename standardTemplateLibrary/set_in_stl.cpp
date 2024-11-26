#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(5);
    s.insert(4);
    
    cout<<"lower bound : "<<*(s.lower_bound(2))<<endl;  // if not found then return s.end // 0
    cout<<"upper bound : "<<*(s.upper_bound(2))<<endl;
    

    for(int val : s){
        cout<<val<<" ";
    }
    return 0;
}