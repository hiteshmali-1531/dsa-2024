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

bool hasCycle(Node *head) {
        Node *slow = head;
        Node *fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                return true;
            }
        }
        return false;
    }


Node *detectCycle(Node *head) {
        Node* slow = head;
        Node* fast = head;
        bool isCycle = false;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                isCycle = true;
                break;
            }
        }
        if(!isCycle){
            return NULL;
        }
        slow = head;
        Node* prev = NULL;
        while(slow != fast){
            slow = slow->next;
            prev = fast;
            fast = fast->next;
        }
        prev->next = NULL;
        return slow;
    }



int main(){

    return 0;
}