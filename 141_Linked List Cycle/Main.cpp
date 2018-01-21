#include <iostream>
#include "Solution.h"

using namespace std;

int main()
{
    Solution_2 s;
    int data[] = {1,2,3,4,5};
    ListNode *head = create_list(data,sizeof(data)/sizeof(data[0]));
    head->next->next->next->next->next = head->next;
//  print_list(head);
    cout<<s.hasCycle(head)<<endl;
    return 0;
}
