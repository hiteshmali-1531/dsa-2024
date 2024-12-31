#include<iostream>
#include<vector>
using namespace std;

bool isPalinpart(string part){
        if(part.size() == 1){
            return true;
        }
        int st = 0;
        int end = part.size()-1;
        while(st<end){
            if(part[st] == part[end]){
                st++;
                end--;
            }else{
                return false;
            }
        }
        return true;
    }
    void getAllparts(string s, vector<vector<string>>& ans, vector<string>& partition){
        if(s.size() == 0){
            ans.push_back(partition);
            return ;
        }

        for(int i=0; i<s.size(); i++){
            string part = s.substr(0, i+1);
            if(isPalinpart(part)){
                partition.push_back(part);
                getAllparts(s.substr(i+1), ans, partition);
                partition.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans ;
        vector<string> partition;
        getAllparts(s, ans, partition);
        return ans;
    }

int main(){
    vector<vector<string>> ans = partition("aaba");
    cout<<"[";
    for(auto x: ans){
        cout<<"[";
        for(auto y: x){
            if(y == x[x.size()-1]){
                cout<<y;
                break;
            }
            cout<<y<<" ,";
        }
        if(x == ans[ans.size()-1]){
            cout<<"]";
            break;
        }
        cout<<"] ,";
       
    }
    cout<<"]";

    return 0;
}
