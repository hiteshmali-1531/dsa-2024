#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

vector<char> compression(vector<char> &str){
    
    int idx = 0;
    for(int i=0; i<str.size(); i++){
        char ch = str[i];
        int count = 0;
        while(i<str.size() && ch == str[i]){
            count++;    
            i++;
        }
            str[idx] = ch;
            idx++;
        if(count>1){
            string word = to_string(count);
            for(int i = 0; i<word.length(); i++){

            str[idx] = word[i];
            idx++;
            }
        }
        i--;

    }
    str.resize(idx);
    return str;
}

int main(){
    vector<char> chars = {'a', 'a', 'b','b', 'c','c','c'};
    compression(chars);
    for(char ch : chars){
        cout<<ch;
    }
    return 0;
}