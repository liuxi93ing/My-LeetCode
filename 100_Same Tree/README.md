# Question: (Easy)

Given two binary trees, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical and the nodes have the same value

## Example 1:

Input:   
>         1        1   
>        / \      / \  
>       2   3    3   2 
>
>        [1,2,3],  [1,3,2] 
>
>Output: true

## Example 2:

Input:	   
>          1      1   
>         /        \  
>        2          2 
>
>        [1,2],  [1,null,2] 
>
>Output: false

## Example 3:

Input:
>          1        1   
>         / \      / \  
>        2   1    1   2 
>
>        [1,2,1],  [1,1,2] 
>
>Output: false

# 解析：

前序遍历比较每个结点。先判断是否为空，再比较当前结点值，若相等递归比较左右子树。

# 笔记：

创建二叉树可以使用前序序列和中序序列递归创建，前提是序列中没有重复数据。有重复数据可以手动创建。



