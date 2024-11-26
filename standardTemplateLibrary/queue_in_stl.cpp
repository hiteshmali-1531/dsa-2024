#include<iostream>
#include<queue>
using namespace std;



int main(){
    // queue<int> q;
    // q.push(1);
    // q.push(2);
    // q.push(3);

    // priority_queue<int> q;
    priority_queue<int , vector<int> ,greater<int>> q;
    q.push(3);
    q.push(5);
    q.push(8);
    q.push(1);

    // while(!q.empty()){
    //     cout<<q.front()<<" ";
    //     q.pop();

    // }
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();

    }
    return 0;
}