# Question: (Easy)

Given a binary tree, find its minimum depth.

The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

# 解析：

树的度指root到叶子节点的距离，叶子指左右子树都是NULL的节点。因此要单独判断每个结点左右子树是否为空的情况。其余与max depth相似，比较时把max()换成min().