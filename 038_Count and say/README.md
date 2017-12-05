# Question: (Easy)

The count-and-say sequence is the sequence of integers with the first five terms as following:


>1.     1 <br>
>2.     11 <br>
>3.     21 <br>
>4.     1211 <br>
>5.     111221

`1` is read off as `"one 1"` or `11`.
`11` is read off as `"two 1s"` or `21`.
`21` is read off as `"one 2`, then `one 1"` or `1211`.
Given an integer n, generate the nth term of the count-and-say sequence.

Note: Each term of the sequence of integers will be represented as a string.

## Example 1:

>Input: 1 <br>
>Output: "1"

## Example 2:

>Input: 4 <br>
>Output: "1211"

# 解析：

用一个int数组记录生成数据，初始化为{1}，一个栈作为辅助存储空间。把数组的数据从后往前入栈，入栈一个数和这个数连续的个数。数组清空后，栈里的数据依次出栈，从头写入数组。一个循环完成。

最后把数组转化为字符串返回。