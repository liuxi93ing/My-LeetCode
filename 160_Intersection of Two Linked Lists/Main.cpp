#include <iostream>
#include "Solution.h"

using namespace std;

int main()
{
    Solution s;
    int data[] = {1,2,3,4,5};
    int data2[] = {-1,0,2,3,4,5};
    ListNode *head1 = create_list(data,sizeof(data)/sizeof(data[0]));
    ListNode *head2 = create_list(data2,sizeof(data2)/sizeof(data2[0]));
    head2->next->next = head1->next;
    ListNode *inter = s.getIntersectionNode(head1,head2);
    if(!inter)
        cout<<"NULL"<<endl;
    else
        cout<<inter->val<<endl;
    return 0;
}
