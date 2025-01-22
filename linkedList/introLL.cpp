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

class List{
    Node* head;
    Node* tail;
    public :
        List(){
            head = NULL;
            tail = NULL;
        }

        void push_back(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;
                return ;
            }else{
                tail->next = newNode;
                tail = newNode;
            }
        }

        void push_front(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;
                return;
            }else{
                newNode->next = head;
                head = newNode;
                
            }

        }

        void pop_front(){
            if(head == NULL){
                return ;
            }
            Node* temp = head;

            head = head->next;
            temp->next = NULL;
            delete temp;

        }

        void printLL(){
            Node* temp = head ;
            while(temp != NULL){
                cout<<temp->data<<" -> ";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
            
        }

        void pop_back(){
            Node* node;
            Node* temp = head;
            if(head == NULL){
                cout<< "LL is empty"<<endl;
                return ;
            }
            if(head == tail){
                head = tail = NULL;
                return ;
            }
            while(temp->next != tail){
                temp = temp->next;

            }
            
            temp->next = NULL;
            delete tail;
            tail = temp;

        }

        void insert(int val , int pos){
            if(pos<0){
                cout<<"invalid position"<<endl;
                return ;
            }
            if(pos == 0){
                push_front(val);
                return ;
            }
            Node* newNode = new Node(val);
            Node* temp = head;
            for(int i=0; i<pos-1; i++){
                if(temp == NULL){
                    cout<<"invalid pos"<<endl;
                    return;
                }
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }

        int search(int key){
            Node* temp = head;
            int idx = 0;
            while (temp != NULL){
                if(temp->data == key){
                    return idx;
                }
                temp = temp->next;
                idx++;
            }
            return -1;
            
        }
};



int main(){
    List* ll = new List();
    ll->push_front(1);
    ll->push_front(2);
    ll->push_front(3);
   
   
    ll->printLL();
    ll->insert(5,0);
    ll->printLL();

    cout<<ll->search(1)<<endl;

    // List ll;
    // ll.push_front(1);
    // ll.push_front(2);
    // ll.push_front(3);
    // ll.printLL();


    return 0;
}