# Question: (Easy)

mplement `int sqrt(int x)`.

Compute and return the square root of x.

x is guaranteed to be a non-negative integer.

## Example 1:

>Input: 4 <br>
>Output: 2

## Example 2:

>Input: 8 <br>
>Output: 2

Explanation: The square root of 8 is 2.82842..., and since we want to return an integer, the decimal part will be truncated.

# 解析：

注意int型运算中间值的范围还是int，注意溢出的情况。若使用 i*i<=x&&x<=(i+1)*(i+1)判断的话，要考虑到x没溢出但(i+1)*(i+1)溢出的情况。另一个办法是转化成double型用(i/2)*(i/2)和x/4比较。

优化方法：本题属于查找有序数组特定元素，可使用二分查找。 也可使用牛顿迭代。

# 二分查找笔记：

1.若想要取到边界值，left = mid+1, right = mid-1; 跳出循环条件为(left<=right)。没找到正确结果也会结束循环，此时left>right。

2. mid = left+(right-left)/2。若写成(left+right)/2，可能会遇到 left+right 溢出的情况。

