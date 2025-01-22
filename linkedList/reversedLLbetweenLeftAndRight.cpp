#include<iostream>
using namespace std;

class Node {
    public:
        int val;
        Node *next;
      
        Node(int x) {
            this->val = x;
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
                cout<<temp->val<<" -> ";
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
                if(temp->val == key){
                    return idx;
                }
                temp = temp->next;
                idx++;
            }
            return -1;
            
        }

        Node* reverseBetween( int left, int right) {
        if(left == right || head== NULL ){
            return head;
        }
        Node* leftPrevNode = NULL;
        Node* temp = head;
        Node* leftNode = NULL;
        Node* rightNode = NULL;
        int i=1;
        while(temp != NULL){
            if(i == left-1){
                leftPrevNode = temp;
            }
            if(i == left){
                leftNode = temp;
            }else if(i == right){
                rightNode = temp;
            }
            
            temp = temp->next;
            i++;
        }

        i = left;
        
        Node* curr = leftNode;
        Node* prev = NULL;
        Node* next = NULL;
        while(curr != rightNode){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            

        }
        if(curr != NULL){

            next = curr->next;
            curr->next = prev;
        }
        if(next != NULL){

        leftNode->next = next;
        
        
    }
        if(leftPrevNode != NULL){

            leftPrevNode->next = rightNode;
        }else{
            head = rightNode;
            return rightNode;
        }
        return head;


    }
};


 

int main(){

    List ll = List();
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    Node* head = ll.reverseBetween(2,2);
    Node* temp= head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
    ll.printLL();
    return 0;
}