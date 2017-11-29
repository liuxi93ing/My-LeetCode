#include <iostream>
#include "Solution.h"


using namespace std;


ListNode* create_list(int *s, int length)
{
    ListNode *head = new ListNode(s[0]);
    ListNode *current = head;
    ListNode *prev = current;
    for(int i=1;i<length;i++)
    {
        current = new ListNode(s[i]);
        prev->next = current;
        prev = current;
    }
    return head;
}

void print_list(ListNode* head)
{
    ListNode *p = head;
    while(p!=NULL)
    {
        cout<< p->val<<' ';
        p = p->next;
    }
    cout<<'\n';
}

void Bubble_sort(int *a, int length)
{
    int i,j;
    for(i=0;i<length-1;i++)
    {
        for(j=0;j<length-i-1;j++)
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);

    }
}

int main()
{
    ListNode *head1;
    ListNode *head2;
    ListNode *head3;
    int s1[] = {};
    int s2[] = {};

    Bubble_sort(s1, sizeof(s1)/sizeof(s1[0]));
    Bubble_sort(s2, sizeof(s2)/sizeof(s2[0]));

    head1 = create_list(s1, sizeof(s1)/sizeof(s1[0]));
    head2 = create_list(s2, sizeof(s2)/sizeof(s2[0]));

    cout<<"first linked list is:\n";
    print_list(head1);
    cout<<"Second linked list is:\n";
    print_list(head2);

    cout<<"merged linked list is:\n";
    Solution s;
    head3 = s.mergeTwoLists(head1,head2);
    print_list(head3);

    return 0;
}
