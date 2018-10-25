# Question: (Easy)

Given an array where elements are sorted in ascending order, convert it to a height balanced BST.

For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.

## Example:

>Given the sorted array: [-10,-3,0,5,9],
>
>One possible answer is: [0,-3,9,-10,null,5], which represents the following height balanced BST:

>            0      
>           / \     
>         -3   9    
>         /   / 	 
>      -10   5


# 解析：

常用的算法，binary-search-tree的特点是结点数据大小关系为：左<中<右。BST的中序遍历肯定是排好序的数组。给定排好序的数组，我们使用二分法建立bst。取数组中间位置的数作为root结点数据，左一半数组递归建立做子树，右一半数组递归建立右子树。

注：并非一定要绝对的中间位置的数据作为根节点，任意一个数据都可作为根节点。 

