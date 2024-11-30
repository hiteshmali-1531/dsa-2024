#include<iostream>
#include<vector>
using namespace std;

int countPrimes(int n){
    vector<bool> isPrime(n+1, true);
    int count = 0;
    for(int i =2; i<n ;i++){
        int j = 2;
        if(isPrime[i]){
            int currNumber = i;
            count++;

            while(currNumber && currNumber*j<=n){
                isPrime[currNumber*j] = false;
                j++;
            }
        }
    }
    return count;   
}

 


string isPrime(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            return "not prime";
        }
    }
    return "prime";
}

int main(){
    cout<<isPrime(4)<<endl;
    cout<<countPrimes(2)<<endl;
    return 0;
}