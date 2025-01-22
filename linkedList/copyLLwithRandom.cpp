#include<iostream>
#include<unordered_map>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};



class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL){
            return NULL;
        }
        unordered_map<Node*, Node*> m;
        Node* newHead = new Node(head->val);
        Node* oldTemp = head->next;
        Node* newTemp  = newHead;
        m[head] = newHead;
        while(oldTemp != NULL){
            Node* temp = new Node(oldTemp->val);
            newTemp->next = temp;
            m[oldTemp]= temp;
            newTemp = temp;
            
            oldTemp = oldTemp->next;
        }
        oldTemp = head;
        newTemp = newHead;
        while(oldTemp != NULL){
            if(m.find(oldTemp->random) != m.end()){
                newTemp->random = m[oldTemp->random];
            }else{
                newTemp->random = NULL;
            }
            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }
        return newHead;
    }
};