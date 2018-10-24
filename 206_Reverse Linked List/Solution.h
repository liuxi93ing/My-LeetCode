#include "LinkedList.h"
using namespace std;

// recursion solution
class Solution_1{
public:
    ListNode* reverseList(ListNode* head) {

        if(head==NULL) return NULL;

        ListNode *newhead;
        if(head->next==NULL){
            newhead = head;
        }else{
            newhead = reverseList(head->next);
            ListNode *p = newhead;
            while(p->next!=NULL) p=p->next;
            p->next = new ListNode(head->val);
        }
        return newhead;

    }
};

// iteration solution
class Solution_2{
public:
    ListNode* reverseList(ListNode* head) {

        if(head==NULL) return NULL;

        ListNode *newhead = new ListNode(0);
        ListNode *current = newhead;

        while(head->next!=NULL){
            ListNode *p = head;
            while(p->next->next!=NULL){
                p = p->next;
            }
            current->next = new ListNode(p->next->val);
            current = current->next;
            p->next=NULL;
        }

        current->next = new ListNode(head->val);

        return newhead->next;
    }
};
