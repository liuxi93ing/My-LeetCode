#include "LinkedList.h"
using namespace std;

class Solution{
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL&&head->val==val) head = head->next;
        if(head==NULL) return NULL;

        ListNode *current = head->next;
        ListNode *previous = head;

        while(current!=NULL){
            if(current->val==val) {
                previous->next=current->next;
                current = current->next;
                continue;
            }
            current = current->next;
            previous = previous->next;
        }
        return head;
    }

};
