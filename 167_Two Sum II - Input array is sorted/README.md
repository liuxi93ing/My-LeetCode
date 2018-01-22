# Question: (Easy)

Given an array of integers that is already sorted in ascending order, find two numbers such that they add up to a specific target number.

The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.

You may assume that each input would have exactly one solution and you may not use the same element twice.

## Example
>
>Input: numbers={2, 7, 11, 15}, target=9  <br>
>Output: index1=1, index2=2				<br>

# 解析：

与“Two Sum I”相比，此时数据是有序的。因此可以使用两边逼近法。index1=0，index2=n.size()-1;在循环中比较n[index1]+n[index2]和target大小，小于target，则index1++来增大和；如果大于target则index2--来缩小和。等于target跳出循环。注：每次循环只进行一次移动（index1或index2）。