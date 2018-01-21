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
    int s1[] = {};

    Bubble_sort(s1, sizeof(s1)/sizeof(s1[0]));

    head1 = create_list(s1, sizeof(s1)/sizeof(s1[0]));

    cout<<"sorted linked list is:\n";
    print_list(head1);

    cout<<"simplified linked list is:\n";
    Solution s;
    head2 = s.deleteDuplicates(head1);
    print_list(head2);

    return 0;
}
