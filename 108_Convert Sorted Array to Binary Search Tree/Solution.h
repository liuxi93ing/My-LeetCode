#include <iostream>
#include <vector>
#include "TreeNode.h"
using namespace std;

class Solution{
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.empty()) return NULL;
        TreeNode* root = createBST(nums, 0, nums.size()-1);
        return root;
    }

    TreeNode* createBST(vector<int>& nums, int left, int right){
        if(left>right) return NULL;
        int mid = (left+right)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = createBST(nums,left,mid-1);
        root->right = createBST(nums,mid+1,right);
        return root;
    }
};
