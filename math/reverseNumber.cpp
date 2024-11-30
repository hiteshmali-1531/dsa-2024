#include<iostream>
using namespace std;

int reverseNumber(int n){
    int reverseNum = 0;

    while(n != 0){
        int rem = n%10;
        if(reverseNum > INT_MAX/10 || reverseNum < INT_MIN/10){
            return 0;
        }
        reverseNum = reverseNum*10 + rem;
        n/=10;
    }

    return reverseNum;
}

int main(){
    cout<<reverseNumber(4537)<<endl;
    return 0;
}