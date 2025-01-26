#include<iostream>
using namespace std;

class Node{
    public:
        int val;
        Node* next ;
        Node(int val){
            this->val = val;
            next = NULL;
        }
};

Node* reverseKGroup(Node* head, int k) {
        Node* temp = head;
        int cnt = 0;
        while(cnt < k){
            if(temp == NULL){
                return head;
            }
            temp = temp->next;
            cnt++;
        }
        Node* prevNode = reverseKGroup(temp, k);
        Node* next = NULL;
        temp = head;
        cnt = 0;
        while(cnt<k){
            next = temp->next;
            temp->next = prevNode;
            prevNode = temp;
            temp = next;
            cnt++;
        }
        return prevNode;
    }

int main(){

    return 0;
}