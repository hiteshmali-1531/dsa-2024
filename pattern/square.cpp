#include<iostream>
using namespace std;

int main()
{
    int n = 3;
    // for(int i=0; i<=n-1 ; i++){
    //     for(int j=0; j<=n-1; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }


    // for(int i=0; i<=n-1 ; i++){
    //     char ch = 'A';
    //     for(int j=0; j<=n-1; j++){
    //         cout<<(char)(ch+j)<<" ";
    //     }
    //     cout<<endl;
    // }

    /*                        OR                                          */

    
    // for(int i=0; i<=n-1 ; i++){
    //     char ch = 'A';
    //     for(int j=0; j<=n-1; j++){
    //         cout<<ch<<" ";
    //         ch = ch+1;
    //     }
    //     cout<<endl;
    // }

    // int num =1;

    // for(int i=0 ; i<=n-1; i++){
    //     for(int j=0; j<=n-1; j++){
    //         cout<<num<<" ";
    //         num = num + 1;
    //     }
    //     cout<<endl;
    // }


     char ch = 'A';

    for(int i=0 ; i<=n-1; i++){
        for(int j=0; j<=n-1; j++){
            cout<<ch<<" ";
            ch = ch + 1;
        }
        cout<<endl;
    }
    return 0;
}
