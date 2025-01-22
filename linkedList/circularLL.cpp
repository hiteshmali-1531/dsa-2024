#include<iostream>
using namespace std;

class Node{
    public :
        int val;
        Node* next;
        Node(int val){
            this->val = val;
            next = NULL;
        }
};

class CircularList{
    Node* head;
    Node* tail;
    public :
        CircularList(){
            head = tail = NULL;
        }

        void push_front(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;
                tail->next = head;
                return ;
            }

            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
        void print(){
            if(head == NULL){
                return ;
            }
            cout<<head->val<<"->";
            Node* temp = head->next;
            while(temp != head){
                cout<<temp->val<<"->";  
                temp= temp->next;
            }
            cout<<temp->val<<endl;
        }

        void push_back(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;
                tail->next = head;
                return ;
            }
            newNode->next = head;
            tail->next = newNode;
            tail = newNode;
            
        }

        void pop_front(){
            if(head == NULL){
                cout<<"LL is empty";
                return ;
            }
            if(head == tail){
                delete head;
                head = tail = NULL;
                return ;
            }
            Node* temp = head;
            head = head->next;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
        void pop_back(){
            if(head == NULL){
                cout<<"LL is empty";
                return ;
            }
            if(head == tail){
                delete head;
                head = tail = NULL;
                return ;
            }
            Node* temp = tail;
            Node* prev = head;
            while(prev->next != tail){
                prev = prev->next;
            }
            prev->next = tail->next;
            tail = prev;
            temp->next = NULL;
            delete temp;
        }
};

int main(){
    CircularList cl = CircularList();
    cl.push_front(3);
    cl.push_front(4);
    cl.push_front(1);
    cl.push_back(5);
    cl.push_back(8);
    cl.print();  
    cl.pop_front();
    cl.print();  
    cl.pop_back(); 
    cl.print();  
  
    return 0;
}