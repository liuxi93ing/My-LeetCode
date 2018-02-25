#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* create_list(int *s, int length)
{
    if(length==0)
        return NULL;
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
