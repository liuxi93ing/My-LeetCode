#include <iostream>
#include "LinkedList.h"

using namespace std;


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return head;

        ListNode* current = head;
        ListNode* tail = head;
        while(current!=NULL)
        {
 //           cout<<"current val is "<<current->val<<endl;
            if(current->val==tail->val+1)
            {
 //               cout<<"tail val is "<<tail->val<<endl;
                tail->next = current;
                tail = tail->next;
            }
            current = current->next;
        }
        tail->next= NULL;
        return head;
    }
};
