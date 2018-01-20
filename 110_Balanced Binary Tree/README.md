# Question: (Easy)

Given a binary tree, determine if it is height-balanced.

For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.


# 解析：

判断一颗树是否是平衡二叉树要判断两点：1、左右子树都是平衡二叉树。2、左右子树高度差小于1。

方法一：对于每一个结点，判断这两个条件：1、左子树和右子树是否都是平衡树。2、左右子树高度差小于1。但该方法的问题在于，判断高度和平衡都是单独的递归，每一结点都会至少遍历两次。同时条件1和2的先后顺序也有影响，若使用超长的单支二叉树作为测试用例，如

>   	    1       
>		   /       
>		  2        
>        /      
>      ... 
>      /
>     99
>    /
>  100     

先判断高度差的话需要从1遍历到100再返回1，得出结论高度差不满足。先判断左右平衡的话，也是从1遍历到100，返回过程一直平衡，但在返回到98时即可得出高度差不符不满足。

方法二：

重载本函数，把每个结点的高度也作为参数传入。可实现在遍历1到100的过程中，就已经记录下了每个结点的高度初始值。在返回过程中既可以加出当前结点高度，也判断了是否平衡。因此每个结点只遍历了一次。