#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
    // char str[] = {'a', 'b', 'c', '\0'};
    // char str[] = "hitesh";
    // cout<<strlen(str)<<endl;
    // cout<<str[0]<<endl;

    // cout<< str <<endl;

    // char str[100];
    // // cin>>str;
    // // cin.getline(str, 100);
    // cin.getline(str, 100, '.');
    // cout<<"output : "<<str<<endl;

    // for(char ch : str){
    //     cout<<ch<<" ";
    // }

    // string str = "hitesh" ;
    // cout<<str<<endl;
    // cout<<str.length()<<endl;

    string str ;
    getline(cin, str);
    cout<<"output "<<str<<endl;  
    reverse(str.begin(), str.end());;
     for (auto& x : str) { 
         x = tolower(x); 
     } 
    cout<<"output "<<str<<endl;  
    



    return 0;
}