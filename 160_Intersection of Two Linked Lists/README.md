# Question: (Easy)

Write a program to find the node at which the intersection of two singly linked lists begins.

For example, the following two linked lists:

>A:		a1 → a2 <br>
>				↘  <br>
>				 c1 → c2 → c3 <br>
>				↗ <br>
>B:	b1 → b2 → b3  <br>

begin to intersect at node c1.

## Notes:

* If the two linked lists have no intersection at all, return null.

* The linked lists must retain their original structure after the function returns.

* You may assume there are no cycles anywhere in the entire linked structure.

* Your code should preferably run in O(n) time and use only O(1) memory.

# 解析：

用O(n^2)两重遍历无脑算出。O(n)的方法：假如两条链总结点数相同，那么两个指针都从头走，一次走一步，结果肯定是1)在某处相遇。2)同时走完也没相遇。问题在于两条链不一样长，所以先求出两条链长度la和lb，长的那条指针先走|la-lb|步。之后两指针同时遍历。