#include <vector>
#include <algorithm>
#include "TreeNode.h"

using namespace std;

class Solution_1 {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {

        vector<vector<int>> result;
        vector<int> level;
        vector<TreeNode*> a_queue;

        if(!root)
            return result;
        a_queue.push_back(root);
        level.push_back(root->val);
        result.push_back(level);
        level.clear();

        int counter = 0;
        while(!a_queue.empty()){
            counter = a_queue.size();
            while(counter){
                TreeNode* current = a_queue[0];
                a_queue.erase(a_queue.begin());
                if(current->left){
                    a_queue.push_back(current->left);
                    level.push_back(current->left->val);
                }
                if(current->right){
                    a_queue.push_back(current->right);
                    level.push_back(current->right->val);
                }
                counter--;
            }
            if(!level.empty()){
                result.push_back(level);
                level.clear();
            }
        }
        for(int i =0;i<result.size()/2;i++)
            swap(result[i],result[result.size()-1-i]);
        return result;
    }
};


class Solution_2 {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> list={};
        dfs(list,root,1);
        reverse(list.begin(),list.end());
        return list;
    }

    void dfs(vector<vector<int>> &list, TreeNode * root, int depth){
        if(root==NULL)
            return;
        if(list.size()<depth)
            list.resize(depth);
        list[depth-1].push_back(root->val);

        dfs(list,root->left,depth+1);
        dfs(list,root->right,depth+1);
    }
};
