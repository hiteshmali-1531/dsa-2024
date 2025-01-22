#include<iostream>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
        Node* prev;
        Node(int val){
            this->val = val;
            prev = NULL;
            next = NULL;
        }
};

class DoublyList{
    Node* head;
    Node* tail;
    public:
        DoublyList(){
            head = tail = NULL;
        }

        void push_front(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;
                return ;
            }
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        void printLL(){
            Node* temp = head;
            while(temp != NULL){
                cout<<temp->val<<" <=> ";
                temp = temp->next;
            }
            cout<<"NULL";
        }

        void push_back(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = NULL;
                return ;
            }
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;

        }

        void pop_front(){
            if(head == NULL){
                cout<<"LL is empty "<<endl;
                return ;
            }
            if(head->next == NULL){
                Node* temp = head;
                head = tail = NULL;
                delete temp;
                return ;
            }
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            head->prev = NULL;
            delete temp;
        }

        void pop_back(){
            Node *temp = tail;
            if(head == NULL){
                cout<<"LL is empty";
                return ;
            }
            if(tail->prev == NULL){
                head = tail = NULL;
                delete temp;
                return ;
            }

            tail = tail->prev;
            tail->next = NULL;
            temp->prev = NULL;
            delete temp;
        }
};

int main(){
    DoublyList* dl = new DoublyList();
    dl->push_front(1);
    dl->push_front(2);
    dl->push_back(4);
    dl->push_back(9);
    dl->printLL();
    // dl->pop_front();
    // dl->pop_front();
    // dl->pop_front();
    dl->pop_back();
    // dl->pop_front();
    cout<<endl;
    dl->printLL();
    return 0;
}