# Question: (Easy)

Given a linked list, determine if it has a cycle in it.

## Follow up:

Can you solve it without using extra space?

# 解析：

方法一：把遍历过的节点数值该为从来没出现过的数值x，若某个结点数值是x说明环回来了。（不推荐，虽然判断出环，但数据改变了）

方法二：设定一个快指针和一个慢指针，快指针每一走两步，慢指针每次走一步。如过存在环，两指针终有一天会相遇。注：循环结束条件为(fast!=NULL&&fast->next!==NULL), 保证快指针能有走两步。