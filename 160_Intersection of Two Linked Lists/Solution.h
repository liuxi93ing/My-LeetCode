#include "LinkedList.h"
#include <cmath>
using namespace std;

class Solution{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len_A=0;
        int len_B=0;
        ListNode *pa = headA;
        ListNode *pb = headB;
        // calculate length
        while(pa!=NULL){
            pa = pa->next;
            len_A++;
        }
        while(pb!=NULL){
            pb = pb->next;
            len_B++;
        }
        // shorten longer list
        pa = headA;
        pb = headB;
        int i = abs(len_A-len_B);
        if(len_A>len_B)
            while(i--) pa = pa->next;
        if(len_A<len_B)
            while(i--) pb = pb->next;
        // find intersection
        while(pa!=NULL&&pb!=NULL){
            if(pa==pb)
                return pa;
            pa = pa->next;
            pb = pb->next;
        }
        return NULL;

    }

};
