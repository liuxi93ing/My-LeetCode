using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// ����ǰ�����к��������У��ݹ����ɶ�����
TreeNode* create_Tree(int *pre, int *in, int len)
{
    if(len==0)                                          // ���ڵ�Ϊ�գ��򷵻ؿ�
        return NULL;
    int i =0;
    while(pre[0]!=in[i]&&i<len)   i++;                  // ǰ�����е�һ��Ԫ��Ϊ���ڵ㣬�ҵ���Ԫ�������������е�λ�ã����������и�Ԫ�����Ϊ���������ұ�������
    TreeNode* root = new TreeNode(pre[0]);              // ������ڵ����ݣ���ǰ�ڵ㣩
    root->left = create_Tree(pre+1, in, i);             // �ݹ���������������ȷ��ȡ�µ�ǰ����������У�
    root->right = create_Tree(pre+i+1,in+i+1,len-i-1);  // �ݹ�����������
    return root;
}

// ��ӡǰ������
void pre_order_print(TreeNode* root)
{
    if(root==NULL)
        return;
    cout<< root->val<<' ';
    pre_order_print(root->left);
    pre_order_print(root->right);
}


// ��ӡ��������
void in_order_print(TreeNode* root)
{
    if(root==NULL)
        return;
    in_order_print(root->left);
    cout<< root->val<<' ';
    in_order_print(root->right);
}

// ��ӡ��������
void post_order_print(TreeNode* root)
{
    if(root==NULL)
        return;
    post_order_print(root->left);
    post_order_print(root->right);
    cout<< root->val<<' ';
}
