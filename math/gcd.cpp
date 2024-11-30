#include<iostream>
using namespace std;

int gcd(int a, int b){
    int GCD = 0;
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    if(a>0 && b>0){
        if(a>b){
            GCD = gcd(a%b, b);
        }else{
            GCD= gcd(a, b%a);
        }
    }
    return GCD;
}

int lcm(int a,int b){
    int GCD = gcd(a, b);
    return (a*b)/GCD;
}

int findGcd(int a, int b){
    if(a ==0){
        return b;
    }
    if(b==0){
        return a;
    }
    if(a==b){
        return b;
    }
    int gcd = 1;
    for(int i=1; i<min(a, b); i++){
        if(a%i==0 && b%i ==0){
            gcd = i;
        }
    }

    return gcd;
}

int main(){
    cout<<findGcd(20, 28)<<endl;
    cout<<gcd(6,12)<<endl;
    cout<<lcm(20,28);
    return 0;
}