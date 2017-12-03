# Question: (Easy)

Given an array and a value, remove all instances of that value in-place and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

The order of elements can be changed. It doesn't matter what you leave beyond the new length.

## Example:

>Given nums = [3,2,2,3], val = 3,
>
>Your function should return length = 2, with the first two elements of nums being 2.

#解析：

开始想错的思路：从头向后遍历，把要删除的元素与最后面的元素交换，最后截取前面有效的长度。当要删除的元素占多数时则行不通

正确的思路：从头向后遍历，把要留下来的元素重写到开头。 同Q26。