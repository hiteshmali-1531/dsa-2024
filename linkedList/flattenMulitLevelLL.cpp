#include<iostream>
using namespace std;

class Node{
    public: 
        int val;
        Node* next;
        Node* prev;
        Node* child;
        Node(int val){
            this->val = val;
            this->next = NULL;
            this->child = NULL;
            this->prev = NULL;
        }
};

Node* flatten(Node* head) {
        if(head == NULL){
            return head;
        }
        Node* curr = head;
        Node* next = NULL;
        while(curr != NULL){
            if(curr->child != NULL){
                next = curr->next;
                curr->next = flatten(curr->child); // flatten child Nodes
                curr->next->prev = curr;
                curr->child = NULL;
                while(curr->next != NULL){ // find tail Node
                    curr = curr->next;
                }
                if(next != NULL){ //attach tail Nodes to next Node
                    curr->next = next;
                    next->prev = curr;
                }
            }
            curr = curr->next;
        }

        return head;
    }

int main(){

    return 0;
}