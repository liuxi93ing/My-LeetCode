# Question: (Easy)

Given an array of integers and an integer k, find out whether there are two distinct indices i and j in the array such that nums[i] = nums[j] and the absolute difference between i and j is at most k.

# 解析：

本题目为：是否存在这样的两个数值相同的数，且下标差的绝对值小于k。

使用hash-table，遍历中元素第一次出现便把下标值记录在value里。当再次出现时比较当前下标与记录的下标是否满足要求。满足返回，若不满足继续遍历直到结束。