# Question: (Easy)

Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).

For example, this binary tree [1,2,2,3,4,4,3] is symmetric:

>   		1       <br>
>		   / \      <br>
>		  2   2     <br>
>        / \ / \    <br>
>       3  4 4  3

But the following [1,2,2,null,3,null,3] is not:

>   		1       <br>
>		   / \      <br>
>		  2   2     <br>
>          \   \    <br>
>           3   3

## Note:

Bonus points if you could solve it both recursively and iteratively


# 解析：

错误的思路:如果一个二叉树是对称的，那么他的中序序列也是回文序列，因此先生成中序序列，再判断其是否对称。但错误在于并“中序序列回文”不是“二叉树对称”的充要条件。“二叉树对称”能推出“中序序列回文”，但“中序序列回文”不一定“二叉树对称”。比如下面二叉树中序序列为23132:

>   		1       <br>
>		   / \      <br>
>		  2   3     <br>
>          \   \    <br>
>           3   2

思路改进: 单独剔除中情况即可。开始处增加判断: 当根节点的左右叶子都有值且不相等时，返回false。 

方法二: 把root节点下的左右子树当成两棵树*tree1和*tree2，递归比较tree1->left和tree2->right,tree1->right和tree2->left。