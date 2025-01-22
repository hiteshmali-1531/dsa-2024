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

 Node* middleNode(Node* head) {
    if(head==NULL|| head->next==NULL)return head;
    Node* fast=head;
    Node* slow=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
    }



int main(){

    return 0;
}