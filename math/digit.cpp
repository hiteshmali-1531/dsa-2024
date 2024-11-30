#include<iostream>
using namespace std;


bool isArmstrong(int n){
    int copyN = n;
    int sum = 0;
    while(n !=0){
        int digit = n%10;
        sum += digit*digit*digit;
        n/=10;
        
    }
   return sum == copyN;
}

void printDigit(int n){
    int sum = 0;
    int count=0;
    while(n!=0){
        int digit = n%10;
        count++;
        sum += digit;
        cout<<digit;
        n /=10;
    }
    cout<<endl;
    cout<<"sum : "<<sum<<endl;
    cout<<"count : "<<count<<endl;
}

int main(){
    printDigit(343);
}