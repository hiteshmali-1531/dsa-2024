#include<iostream>
using namespace std;

int main(){
    int n = 4; 
    // for(int i=0; i<=n-1; i++){
    //     for(int j=0; j<=n-i-2; j++){
    //         cout<<"  ";
    //     }
    //     for(int j = 0; j<=i; j++){
    //         if(j == 0){
    //             cout<<"* ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }

    //     for(int j=0; j<=i-1; j++){
    //         if(j == i-1){
    //             cout<<"* ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }


    for(int i=0; i<=n-1;i++){
        for(int j=0; j<=n-i-2; j++){
            cout<<"  ";
        }
        cout<<"* ";
        if(i != 0){
            for(int j= 0; j<i*2-1; j++){
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=0; i<n-1; i++){
        for(int j=0; j<=i; j++){
            cout<<"  ";
        }
        cout<<"* ";

        if(i!=n-2   ){
            for(int j=0; j< (n-i-2)*2-1; j++){
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}