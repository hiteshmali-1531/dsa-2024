#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string, int> m;
    m["tv"] = 100;
    m["laptop"] = 50;
    m["headphone"] = 100;
    m["tablet"] = 120;
    m["watch"] = 40;
    m.insert({"camera", 200});
    m.erase("tv");

    // for(pair<string,int> p:m){
    //     cout<<p.first<<" : "<<p.second<<endl;
    // }
    for(auto p:m){
        cout<<p.first<<" : "<<p.second<<endl;
    }

    cout<<"count "<<m.count("laptop")<<endl;
    cout<<"value "<<m["laptop"]<<endl;
    if(m.find("camera") != m.end()){
        cout<<"found\n";
    }else{
        cout<<"not found\n";
    }
    return 0;
}