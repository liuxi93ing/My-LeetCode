# Question: (Easy)

Given a sorted array, remove the duplicates in-place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

## Example:

>Given nums = [1,1,2],
>
>Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively.
>It doesn't matter what you leave beyond the new length.

#解析:

in-place：原地的意思，即不开辟临时数组作为辅助存储

O(1) space: 开辟的新空间不随输入数据大小变化

方法一：删除多余的元素

由于是有序数组，把每一个元素和其相邻的比较，若相同使用erase函数删掉

方法二：重写数组 （运行效率高）

若原数组为	{1,2,3,3,3,4,4,5,6,6,7}

重写后为	{1,2,3,4,5,6,7,5,6,6,7}

即当每个数第一次出现时，按顺序从头写入。 最后返回当前重写的位置+1，即为新数组的长度。

#思考：

不要被题目误导，remove duplicates并不一定代表要删除数组元素。本题重写后返回有效长度更快捷。考虑到运行效率时，尽量少调用C++自带的类函数。