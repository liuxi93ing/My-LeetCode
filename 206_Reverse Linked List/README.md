# Question: (Easy)

Reverse a singly linked list.

click to show more hints.

Hint:
A linked list can be reversed either iteratively or recursively. Could you implement both?

# 解析：

方法一：递归。入递归过程：如果当前结点不是最后一个结点，f(下一个结点)。出递归过程：当前f()返回了一个已经转置好链表， 范围是下一个结点到末尾。把原链表当前结点附加到转置链表的结尾，返回转置链表。注意每次都要创建新的头指针。

方法二：循环。每次循环找到最末尾的结点，用该结点值创建新节点加入转置表，删除该结点。外层循环判断链表是否只剩头结点。内层循环每次指向下一个。