# Question: (Easy)

Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.

For example:

Given the below binary tree and sum = 22,

>           5       
>          / \      
>         4   8    
>        /   / \    
>       11  13  4   
>      /  \      \  
>     7    2      1  

return true, as there exist a root-to-leaf path 5->4->11->2 which sum is 22.


# 解析：

遍历到每个节点时，先用sum减去当前节点值。如果当前节点是叶子节点，判断sum是否为0。分情况递归左为空，右为空，和左右都不为空的情况。

