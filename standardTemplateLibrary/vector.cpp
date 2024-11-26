#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;

    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.emplace_back(5);
    // vec.pop_back();

    // vec.erase(vec.begin());

    // vec.erase(vec.begin()+1, vec.begin()+3);

    vec.insert(vec.begin()+2, 100);

    // vec.clear();
    // cout<<vec.size()<<endl;
    // cout<<vec.capacity()<<endl;
    // for(int val : vec){
    //     cout<<val<<" ";
    // }
    // cout<<endl;

    // // cout<<"first element is : " <<vec.front()<<" \nlast element is : "<<vec.back()<<endl;
    // cout<<"empty "<<vec.empty()<<endl;
    // cout<<"begin : "<< *(vec.begin())<<endl;
    // cout<<"end : " << *(vec.end()-1)<<endl;
    // vector<int> vec2(vec);

    // vector<int>::iterator it;
    // for(it = vec.begin(); it != vec.end(); it++){
    //     cout<<*(it)<<" ";
    // }


    vector<int>::reverse_iterator it;
    for( it = vec.rbegin(); it != vec.rend(); it++){
        cout<<*(it)<<" ";
    }
    return 0;
}