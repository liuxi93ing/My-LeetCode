#include <iostream>
#include <vector>
#include "Solution.h"

using namespace std;

int main()
{
    Solution s;
    vector<int> sorted_array = {-2,0,1,2,6,8,10,19};
    TreeNode* root = s.sortedArrayToBST(sorted_array);

    cout<<"pre order:"<<endl;
    pre_order_print(root);
    cout<<endl;
    return 0;
}
