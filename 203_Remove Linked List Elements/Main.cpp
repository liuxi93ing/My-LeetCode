#include <iostream>
#include "Solution.h"

using namespace std;

int main()
{
    Solution s;
    int data[] = {1,1,2,3,4,5,1};
    ListNode *head1 = create_list(data,sizeof(data)/sizeof(data[0]));
    int val = 1;
    print_list(head1);
    head1 = s.removeElements(head1,val);
    print_list(head1);
    return 0;
}
