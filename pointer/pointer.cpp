#include<iostream>
using namespace std ;

void changeA(int* a){
    *a = 20;
}

void  changeA(int &a){  // pass by reference using alias
    a = 20;
}

int main(){
    // int a = 10;
    // int* ptr = &a; // or int *ptr = &a;
    // int** ptr2 = &ptr;
    // cout<<ptr<<endl; // => value of ptr which is address of a
    // cout<<&a<<endl; // => address of a

    // cout<<&ptr<<endl; // => address of ptr

    // cout<<ptr2<<endl;  // => ptr2 value which is address of ptr pointer
    // cout<<&ptr2<<endl; // =>  address of ptr2 
    // cout<<*ptr2<<endl; // => ptr value which is address of a
    // cout<<**ptr2<<endl; // => value of a which is 10
    // cout<<*(&a)<<endl; // => value of a which is 10

    // changeA(&a);
    // changeA(a);

    // cout<<a<<endl;

    int arr[] = {1, 2, 3, 4, 5};
    int* ptr = arr;
    int i=0;
    while (i<5){
        cout<<*ptr<<endl;
        ptr++;
        i++;
    }
    return 0;
}