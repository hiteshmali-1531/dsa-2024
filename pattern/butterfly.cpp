#include<iostream>
using namespace std;

int main(){
    int n= 4;
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }

        for(int j=0; j<(n-i-1)*2; j++){
            cout<<"  ";

        }
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=n-i-1; j++){
            cout<<"* ";
        }
        for(int j=0; j< i*2; j++){
            cout<<"  ";
        }
        for(int j=0; j<=n-i-1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}