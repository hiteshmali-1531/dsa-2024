#include<iostream>
using namespace std;

int main(){
    int n = 8;

    for(int i=0; i<=n-1; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<"  ";
        }
        int num = 1;
        
        for(int j=0; j<=i; j++){
            cout<<(num+j)<<" ";
        }

        for(int j=i; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}