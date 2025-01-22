#include<iostream>
#include<cmath>
using namespace std;

int getPath(string str){
    int X = 0;
    int Y = 0;
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        if(ch == 'N'){
            Y++;
        }else if(ch == 'S'){
            Y--;
        }else if(ch == 'E'){
            X++;
        }else{
            X--;
        }

    }
    int X2 = X*X;
    int Y2 = Y*Y;
    return sqrt(X2+Y2);

}

int main(){
    cout<<getPath("WNEENESENNN");
    return 0;
}