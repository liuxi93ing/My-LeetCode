# Question: (Easy)

Given an array of size n, find the majority element. The majority element is the element that appears more than n/2  times.

You may assume that the array is non-empty and the majority element always exist in the array.

# 解析：

思路一共有三种：

1、排序。把数组排序后，既然最多元素超过半数，可定存在num[i]==num[i+n/2]的情况，num[i]即为所求。

2、用hash table。 使用<unordered_map> 库中的 unordered_map 数据类型来记录原数组各元素个数。用元素下标记录数据值，用元素值记录出现次数。

3、Moore Voting 算法。很巧妙的算法，核心思想是任意两个不同数据可以相互抵消，由于最多的元素过半，最后剩下的肯定是这个元素。遍历数组，用一个count来记录当前元素已经出现的次数;再次遇到相同元素时，count++;遇到不同元素时，count--;count减到0再取新一个元素。最后剩下的就是所求。

4、方法四是直接实现了不同元素相消的算法。但效率上比Moore Voting差太多。

# Note:

1、以后再需要使用排序算法时，一定要使用<algorithm>里的sort，它比自己写的任何一种排序都快，还不是一点半点的快，百倍的快。因为标准库里的sort()是集合了多种不同的排序算法，百家之长集于一身。

2、在需要删除数组中元素时，直接调用erase()效率很慢，一种提高效率的方法就是把要删除元素与末尾元素swap，然后resize使数组长度-1。resize要快于pop_back()。