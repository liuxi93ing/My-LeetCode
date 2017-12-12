#include <iostream>
#include "Solution.h"

using namespace std;

TreeNode* create_Tree(int a[], int len)
{
    return root;
}

void print_Tree(TreeNode* root)
{

}


int main()
{
    Solution s;

    int a[] = {1,2,3,4,5};
    int b[] = {1,2,3,4,5};
    int len_a = sizeof(a)/sizeof(a[0]);
    int len_b = sizeof(b)/sizeof(b[0]);
    TreeNode* root1;
    TreeNode* root2;

    root1 = create_Tree(a,len_a);
    root2 = create_Tree(b,len_b);

    print_Tree(root1);
    print_Tree(root2);


    cout<<endl;
    return 0;
}
