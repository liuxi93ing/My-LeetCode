#include "TreeNode.h"
using namespace std;

class Solution{
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;

        int left_max=maxDepth(root->left);
        int right_max=maxDepth(root->right);

        return (left_max+1)>(right_max+1)? (left_max+1):(right_max+1);
    }
};
