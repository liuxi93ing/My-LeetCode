#include <iostream>
#include "Solution.h"

using namespace std;

int main()
{
    Solution_1 s;
    int data[] = {1,2,3,4,5,6};
    ListNode *head = create_list(data,6);
    print_list(head);
    head = s.reverseList(head);
    print_list(head);
    return 0;
}
