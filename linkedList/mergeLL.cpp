#include<iostream>
using namespace std;

class ListNode{
    public: 
        int val; 
        ListNode* next;
        ListNode(int val){
            this->val = val;
            this->next = NULL;
        }
};

    ListNode* head = NULL;
    ListNode* tail = NULL;
    void push_back(int val){
        ListNode* temp = new ListNode(val);
        if(head == NULL){
            head = temp;
            tail = temp;
        }else{
            tail->next = temp;
            tail = temp;
        }
    
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* ptr1 = list1;
        ListNode* ptr2 = list2;
        while(ptr1 != NULL && ptr2 !=NULL){
            if(ptr1->val <= ptr2->val){
               push_back(ptr1->val);
               ptr1 = ptr1->next;
            }else{
                push_back(ptr2->val);
                ptr2 = ptr2->next;
            }
            
        }

        while(ptr1 != NULL){
            push_back(ptr1->val);
            ptr1 = ptr1->next;
        }

        while(ptr2 != NULL){
            push_back(ptr2->val);
            ptr2 = ptr2->next;
        }
        return head;
    }

    ListNode* mergedTwoLists(ListNode* head1 , ListNode* head2){
        if(head1 == NULL || head2 == NULL){
            return head1 == NULL ? head2 : head1;
        }
        if(head1->val <= head2->val){
            head1->next = mergedTwoLists(head1->next , head2);
            return head1;
        }else{
            head2->next = mergedTwoLists(head1 , head2->next);
            return head2;
        }
    }

int main(){
    return 0;
}