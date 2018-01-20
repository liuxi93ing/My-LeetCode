#include "TreeNode.h"
using namespace std;

// my solution
class Solution{
public:
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        if(root->left==NULL&&root->right==NULL)
            return 1;

        int left_depth = 10000;
        int right_depth = 10000;
        if(root->left!=NULL)
            left_depth = minDepth(root->left);
        if(root->right!=NULL)
            right_depth = minDepth(root->right);
        return (left_depth < right_depth ? left_depth: right_depth) + 1;
    }
};

// more clean code
class Solution{
public:
    int minDepth(TreeNode* root){
        if(root==NULL) return 0;
        if(root->left==NULL) return minDepth(root->right)+1;
        if(root->right==NULL) return minDepth(root->left)+1;
        return min(minDepth(root->left),minDepth(root->right))+1;
    }
};
