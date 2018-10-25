# Question: (Easy)

Given an array of integers, every element appears twice except for one. Find that single one.

## Note:

Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

# 解析:

此题考查异或运算。需了解 a^a=0, a^0=a。因此把数组中每个元素都进行异或操作，两个相同的元素会相互抵消，剩下的就是那个单独的。