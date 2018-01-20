# Question: (Easy)

Given a binary tree, return the bottom-up level order traversal of its nodes' values. (ie, from left to right, level by level from leaf to root).

For example:

Given binary tree [3,9,20,null,null,15,7],

>       3      
>      / \     
>     9  20  
>        / \	 
>       15  7	 

return its bottom-up level order traversal as:

>[			<br>
>  [15,7],  <br>
>  [9,20],  <br>
>  [3]      <br>
>] 


# 解析：

1.循环的方法：创建一个队列，队列里的元素是树的结点。先把root结点进队列。使用两重循环，外层循环记录当前队列长度i。内层循环中，一次取队列中前i个元素，把它们的子节点依次入队列，同时把取过的元素擦除。这样每进行一次内层循环，就实现了把上一层的结点出队列，下一层的结点从左到右入队列。 队列里总是存储某一层的所有结点。

若要按层输出，就在内层循环中把每个结点的值记在数组A中。在外层循环中每次把数组A整体记录到数组B中。

2.递归的方法：使用深度优先遍历。由于当前结点深度也作为函数参数传入，因此在遍历每一个结点时都知道该结点的深度。我们使用一个二维数组list来记录遍历结果。假设某个结点当前深度为d，该节点在list中的位置就是list[d-1][..],每当出现深度为d的结点，把该节点数据push_back到list[d-1]即可。

递归遍历完整颗树。 
