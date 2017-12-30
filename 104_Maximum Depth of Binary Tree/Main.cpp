#include <iostream>
#include "Solution.h"

using namespace std;

int main()
{
    Solution s;
    int pre_a[] = {1,2,3,5,6,4,2,4,3,6,5};
    int in_a[] = {5,3,6,2,4,1,4,2,6,3,5};
    int len_a = sizeof(pre_a)/sizeof(pre_a[0]);

    TreeNode* root_a = create_Tree(pre_a,in_a,len_a);

    pre_order_print(root_a);
    cout<<endl;
    cout<<s.maxDepth(root_a)<<endl;
    return 0;
}
