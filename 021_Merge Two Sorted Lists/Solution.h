#include "LinkedList.h"

using namespace std;


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;

        ListNode* l1_current = l1;
        ListNode* l2_current = l2;
        ListNode* l3_head = new ListNode(-1);
        ListNode* l3_current = l3_head;
        ListNode* l3_prev = l3_current;

        while(l1_current->next!=NULL&&l2_current->next!=NULL)
        {
            if(l1_current->val<l2_current->val)
            {
                l3_current = new ListNode(l1_current->val);
                l3_prev->next = l3_current;
                l3_prev = l3_current;
                l1_current = l1_current->next;
            }
            else
            {
                l3_current = new ListNode(l2_current->val);
                l3_prev->next = l3_current;
                l3_prev = l3_current;
                l2_current = l2_current->next;
            }
        }
        if(l1_current->next==NULL)
            l3_current->next = l2_current;
        if(l2_current->next==NULL)
            l3_current->next = l1_current;

        return l3_head->next;
    }


};
