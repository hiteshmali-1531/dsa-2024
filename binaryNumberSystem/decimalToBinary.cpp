#include<iostream>
using namespace std;

int decToBinary(int decNum){
    int ans =0; 
    int pow = 1;
    int rem ; 
    while(decNum >0){
        rem = decNum %2;
        decNum = decNum /2;
        ans += rem* pow;
        pow = pow * 10;
    }
    return ans;
}

int binToDicimal(int bin){
    int ans = 0; 
    int pow = 1;
    int rem ;
    while(bin >0){
        rem = bin % 10;
        bin = bin / 10;
        ans += rem*pow;
        pow *= 2;
    }
    return ans;
}

int main(){

    int decNum = 50;
    for(int i=1; i<=10; i++){

    cout<<decToBinary(i)<<endl;;
    }
    cout<<binToDicimal(110010)<<endl;
    return 0;

}