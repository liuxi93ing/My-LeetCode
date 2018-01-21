#include <iostream>
#include "Solution.h"


using namespace std;

int main()
{
    Solution s;
    int pre_a[] = {1,2,4,5,6,7,3};
    int in_a[] = {4,2,6,5,7,1,3};
    int len_a = sizeof(pre_a)/sizeof(pre_a[0]);
    TreeNode* root_a = create_Tree(pre_a,in_a,len_a);
    cout<<s.hasPathSum(root_a,4)<<endl;
    return 0;
}
