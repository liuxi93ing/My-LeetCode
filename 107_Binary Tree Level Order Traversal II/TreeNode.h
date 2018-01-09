using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// 根据前序序列和中序序列，递归生成二叉树
TreeNode* create_Tree(int *pre, int *in, int len)
{
    if(len==0)                                          // 根节点为空，则返回空
        return NULL;
    int i =0;
    while(pre[0]!=in[i]&&i<len)   i++;                  // 前序序列第一个元素为根节点，找到该元素在中序序列中的位置，中序序列中该元素左边为左子树，右边右子树
    TreeNode* root = new TreeNode(pre[0]);              // 输入根节点数据（当前节点）
    root->left = create_Tree(pre+1, in, i);             // 递归生成左子树（正确截取新的前序和中序序列）
    root->right = create_Tree(pre+i+1,in+i+1,len-i-1);  // 递归生成右子树
    return root;
}

// 打印前序序列
void pre_order_print(TreeNode* root)
{
    if(root==NULL)
        return;
    cout<< root->val<<' ';
    pre_order_print(root->left);
    pre_order_print(root->right);
}


// 打印中序序列
void in_order_print(TreeNode* root)
{
    if(root==NULL)
        return;
    in_order_print(root->left);
    cout<< root->val<<' ';
    in_order_print(root->right);
}

// 打印后序序列
void post_order_print(TreeNode* root)
{
    if(root==NULL)
        return;
    post_order_print(root->left);
    post_order_print(root->right);
    cout<< root->val<<' ';
}
