# Question: (Easy)

Given a non-negative integer represented as a non-empty array of digits, plus one to the integer.

You may assume the integer do not contain any leading zero, except the number 0 itself.

The digits are stored such that the most significant digit is at the head of the list.

# 解析：

进位: carry

不能把数组存成对应整数来运算，数组可能会无限大。

单独判断全为9的情况，需要增加一位。

