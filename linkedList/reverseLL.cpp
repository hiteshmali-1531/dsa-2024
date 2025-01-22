#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

Node* reverseList(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        while(curr !=NULL){
            next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }
        return prev;
    }

int main(){

    return 0;
}