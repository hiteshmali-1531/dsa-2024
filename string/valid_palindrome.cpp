#include<iostream>
#include<cstring>
using namespace std;

string removeOccurrences(string s, string part) {
        while(s.length()>0 && s.find(part)<s.length()){
            s.erase(s.find(part), part.length());
        }
        return s;
}

bool isAlphaNumeric(char ch){
     if(((ch >='a'&&ch<='z') ||ch>='A' && ch<='Z')||(ch >='0' && ch<='9')){
            return true;
           
        }else{
            return false;
        }
}

bool isPalindrome(string str){
    int st =0;
    int end = str.length()-1;
    while(st<end){
        if(!(isAlphaNumeric(str[st]))){
           
            st++;
            continue;
        }
        if(!isAlphaNumeric(str[end])){
            
            end--;
            continue;
        }
        if(tolower(str[st]) == tolower(str[end])){
            
            st++;
            end--;
        }else{
            return false;
        }

    }
    return true;
}

int main(){
    cout<<isPalindrome("Ac3?e3c&a")<<endl;
    return 0;
}