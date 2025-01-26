#include<iostream>
using namespace std;

class Node{
    public:
        int val ;
        Node* next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};

Node* swapPairs(Node* head) {
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* first = head;
    Node* second = head->next;
    Node* prev = NULL;
    Node* third = NULL;
    while(first != NULL && second != NULL){
        third = second->next;
        second->next = first;
        first->next = third;
        if(prev != NULL){
            prev->next = second;
        }else{
            head = second;
        }
        prev = first;
        first = third;
        if(third != NULL){
            second = third->next;
        }else{
            second = NULL;
        }
    }
    return head;
}

int main(){

}