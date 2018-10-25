#include "TreeNode.h"
using namespace std;

class Solution{
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root)  return false;
        sum = sum-root->val;
//      cout<<"sum is "<<sum<<" root->val is "<<root->val<<endl;
        if(root->left==NULL&&root->right==NULL)
            return sum==0? true:false;
        else return hasPathSum(root->left,sum)||hasPathSum(root->right,sum);
    }

};
