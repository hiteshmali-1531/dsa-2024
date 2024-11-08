#include<iostream>
using namespace std;


int main(){
    int n = 4;
    // for(int i=0; i<=n-1; i++){
    //     for(int j=0; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=0; i<=n-1; i++){
    //     int num = i+1;
    //     for(int j=0; j<=i; j++){
    //         cout<< num<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=0; i<=n-1; i++){
        
    //     for(int j=0; j<=i; j++){
    //         cout<<j+1<<" ";

    //     }
    //     cout<<endl;
    // }


   /*                        OR                                           */
//    for(int i=0; i<=n-1; i++){
//         for(int j=i+1; j>0; j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }

int num = 1;
 for(int i=0; i<=n-1; i++){
        for(int j=0; j<=i; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
   

    return 0;
} 
