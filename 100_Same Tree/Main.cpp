#include <iostream>
#include "Solution.h"

using namespace std;

int main()
{
    Solution s;

    int pre_a[] = {1,2,4,5,6,7,3};
    int in_a[] = {4,2,6,5,7,1,3};
    int pre_b[] = {1,1,2};
    int in_b[] = {1,1,2};
    int len_a = sizeof(pre_a)/sizeof(pre_a[0]);
    int len_b = sizeof(pre_b)/sizeof(pre_b[0]);
    TreeNode* root_a = create_Tree(pre_a,in_a,len_a);
    TreeNode* root_b = create_Tree(pre_b,in_b,len_b);
    TreeNode* root_c = new TreeNode(1);

    {
        root_c->left = new TreeNode(1);
        root_c->right = new TreeNode(2);
    }

    cout<<"pre order is:"<<endl;
    pre_order_print(root_a);
    cout<<endl;
    pre_order_print(root_b);
    cout<<endl;
    pre_order_print(root_c);
    cout<<endl;

    cout<<"in order is:"<<endl;
    in_order_print(root_a);
    cout<<endl;
    in_order_print(root_b);
    cout<<endl;
    in_order_print(root_c);
    cout<<endl;

    cout<<"post order is:"<<endl;
    post_order_print(root_a);
    cout<<endl;
    post_order_print(root_b);
    cout<<endl;
    post_order_print(root_c);
    cout<<endl;


    cout<<s.isSameTree(root_a,root_c);
    return 0;
}
