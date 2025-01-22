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

        Node* search(int key){
            Node* temp = head;
            int idx = 0;
            while (temp != NULL){
                if(temp->val == key){
                    return temp;
                }
                temp = temp->next;
                idx++;
            }
            return NULL;
            
        }

        Node* addTwoNumbers(Node* l1, Node* l2) {
        Node* temp1 = l1;
        Node* head = NULL;
        Node* temp2 = l2;
        Node* prev = NULL;
        bool carry = false;
        int sum = 0;
        while(temp1 != NULL || temp2 != NULL){
            sum = 0;
            if(carry){
                sum += 1;
                carry = false;
            }
            Node* newNode;
            if(temp1 == NULL){
                sum += 0 + temp2->val;
                if(sum>=10){
                    carry = true;
                    sum = sum %10;
                }
                newNode = new Node(sum);
                temp2 = temp2->next;
            }else if(temp2 == NULL){
                sum += 0 + temp1->val;
                if(sum>=10){
                    carry = true;
                    sum = sum %10;
                }
                newNode = new Node(sum);
                temp1 = temp1->next;
            }else{
                sum += temp1->val + temp2->val;
                if(sum>=10){
                    carry = true;
                    sum = sum %10;
                }
                newNode = new Node(sum);
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            if(head == NULL){

                head = newNode;
            }else{
                prev->next = newNode;
            }
            prev = newNode;
          
        }
        if(carry){
            Node* newNode = new Node(1);
            prev->next = newNode;
        }
        return head;
    }
};


 

int main(){

    List ll = List();
    ll.push_back(9);
    ll.push_back(9);
    ll.push_back(9);
    ll.push_back(9);
    ll.push_back(9);
    ll.push_back(9);
    ll.push_back(9);

    List ll1 = List();
    ll1.push_back(9);
    ll1.push_back(9);
    ll1.push_back(9);
    ll1.push_back(9);
    Node* head1 = ll.search(9);
    Node* head2 = ll1.search(9);
    Node* head = ll.addTwoNumbers(head1, head2);
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;


    return 0;
}