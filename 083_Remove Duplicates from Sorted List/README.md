# Question: (Easy)

Given a sorted linked list, delete all duplicates such that each element appear only once.

For example,

Given `1->1->2`, return `1->2`.

Given `1->1->2->3->3`, return `1->2->3`.

# 解析：

先判断对否为空表。思路是跳过所有冗余结点。

判断方法一：判断要删掉的(相等的)。

```C++

if(tail->val==tail->next->val)
	tail->next = tail->next->next;
	
```

判断方法二：判断要留下的(大于的)。

```C++

if(tail->val<current->val)
	tail->next = current;
	
```