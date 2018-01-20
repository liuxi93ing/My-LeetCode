#include "TreeNode.h"
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

     void in_order_seq(TreeNode *root, vector<int> &seq){

        if(root==NULL)
            return;
        in_order_seq(root->left,seq);
        seq.push_back(root->val);
        in_order_seq(root->right,seq);
    }

    bool isSymmetric(TreeNode* root) {

        if(root==NULL) return true;
        if(root->left&&root->right&&root->left->val!=root->right->val)
            return false;

        vector<int> in_seq;
        in_order_seq(root,in_seq);

        int i = 0, j = in_seq.size()-1;
        while(i<=j){
            if(in_seq[i++]!=in_seq[j--])
                return false;
        }
        return true;
    }
};

class Solution_2 {
    bool isSymmetric(TreeNode* root) {
        if(!root)  return true;
        return isSymmetric(root->left,root->right);
    }

    bool isSymmetric(TreeNode* tree1, TreeNode* tree2) {
        if(tree1==NULL&&tree2==NULL) return true;
        if(tree1==NULL||tree2==NULL) return false;

        //when both tree1, tree2 are not NULL
        if(tree1->val!=tree2->val) return false;
        return isSymmetric(tree1->left, tree2->right)&&isSymmetric(tree1->right,tree2->left);

    }

};
