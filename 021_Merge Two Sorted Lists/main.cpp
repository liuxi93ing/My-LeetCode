#include <iostream>
#include "Solution.h"


using namespace std;

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
    int s1[] = {1,2,3,4,5};
    int s2[] = {1,5,9,12};

    Bubble_sort(s1, sizeof(s1)/sizeof(s1[0]));
    Bubble_sort(s2, sizeof(s2)/sizeof(s2[0]));

    head1 = create_list(s1, sizeof(s1)/sizeof(s1[0]));
    head2 = create_list(s2, sizeof(s2)/sizeof(s2[0]));

    cout<<"first linked list is:\n";
    print_list(head1);
    cout<<"Second linked list is:\n";
    print_list(head2);

    cout<<"merged linked list is:\n";
    Solution_2 s;
    head3 = s.mergeTwoLists(head1,head2);
    print_list(head3);

    return 0;
}
