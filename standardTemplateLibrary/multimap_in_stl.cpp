#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    // multimap<string, int> m;

    unordered_map<string,int> m;

    m.insert({"hitesh", 3});
    m.emplace("rahul", 10);
    m.emplace("rohit", 30);
    m.emplace("fk", 90);
    m.emplace("fk", 90);
    m.emplace("fk", 90);

    m.erase(m.find("fk"));

    for(auto p: m){
        cout<<p.first<<" : "<<p.second<<endl;
    }


    return 0;
}