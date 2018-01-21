#include "LinkedList.h"
using namespace std;

class Solution_1{
public:
    bool hasCycle(ListNode *head) {
        ListNode *p = head;
        while(p!=NULL){
            if(p->val==9999) return true;
            else {p->val=9999, p=p->next;}
        }
        return false;
    }

};

class Solution_2{
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast&&fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast) return true;
        }
        return false;

    }

};
