# Question: (Easy)

Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

## Example 1:

>Input: [1,3,5,6], 5 <br>
>Output: 2

## Example 2:

>Input: [1,3,5,6], 2 <br>
>Output: 1

## Example 3:

>Input: [1,3,5,6], 7 <br>
>Output: 4

##Example 5:

>Input: [1,3,5,6], 0 <br>
>Output: 0

# 解析:

方法一：顺序查找

方法二：二分查找

有序不重复数组，使用二分查找标志。 二分查找注意边界值问题。