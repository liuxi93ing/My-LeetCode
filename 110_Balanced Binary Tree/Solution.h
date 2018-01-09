#include <cstdlib>
#include "TreeNode.h"
using namespace std;

// time exceed, every node traverses twice
class Solution_1 {
public:
   bool isBalanced(TreeNode* root) {
       if(root==NULL) return true;
       int diff = maxHeight(root->left)-maxHeight(root->right);
       if(isBalanced(root->left)&&isBalanced(root->right)&&abs(diff)<=1){
           return true;
       } else return false;
   }

   int maxHeight(TreeNode* root){
       if(root==NULL){
           return 0;
       } else {
           return maxHeight(root->left)+1 > maxHeight(root->right)+1?
           maxHeight(root->left)+1:maxHeight(root->right)+1;
       }
   }
};



// similar to solution_1, traverse twice, able to check "line tree"(the reason solution 1 did n't pass)
class Solution_2 {
public:

    bool isBalanced(TreeNode* root) {
       if(root==NULL) return true;
       return (isBalanced(root->left)&&isBalanced(root->right)&&abs(maxHeight(root->left)-maxHeight(root->right))<=1);
   }

   int maxHeight(TreeNode* root){
       if(root==NULL){
           return 0;
       } else {
           return maxHeight(root->left)+1 > maxHeight(root->right)+1?
           maxHeight(root->left)+1:maxHeight(root->right)+1;
       }
   }
};

// faster than solution 2, the expected solution, each node only traverses once
class Solution_3 {
public:

   bool isBalanced(TreeNode* root, int& height) {
       if(root==NULL) return true;
       int l_height = 0, r_height = 0;
       bool l = isBalanced(root->left,l_height);
       bool r = isBalanced(root->right,r_height);
       height = (l_height>r_height? l_height:r_height)+1;

       if(abs(l_height-r_height)>1) return false;
       else return l&&r;
   }

   bool isBalanced(TreeNode* root) {
       int height = 0;
       return isBalanced(root,height);
   }

};
