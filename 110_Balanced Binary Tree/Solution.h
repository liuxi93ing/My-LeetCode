#include <cstdlib>
#include "TreeNode.h"
using namespace std;

// slow solution, time exceed, everynode traveral twice
class Solution_1 {
public:
   bool isBalanced(TreeNode* root) {
       if(root==NULL) return true;
       int diff = maxHeight(root->left)-maxHeight(root->right);
       if(abs(diff)<=1&&isBalanced(root->left)&&isBalanced(root->right)){
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

//
class Solution_2 {
public:

};
