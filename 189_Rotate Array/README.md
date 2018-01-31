# Question: (Easy)

Rotate an array of n elements to the right by k steps.

For example, with n = 7 and k = 3, the array [1,2,3,4,5,6,7] is rotated to [5,6,7,1,2,3,4].

## Note:

Try to come up as many solutions as you can, there are at least 3 different ways to solve this problem.

# 解析：

考虑到k>n 的情况，避免重复移动，k = k%n

方法一：使用辅助数组。向右移k步等于把后k个元素提到前面。先把后k个数放在新数组前面，再把前n-k个加到新数组后面，最后把新数组赋给原数组。

方法二：循环k次，每次把末尾的数插入在最前面，再删除末尾的数。由于使用了insert函数，效率低于方法一。

方法三：进行三次reverse操作，分别是begin到n-k，n-k到end，begin到end。说不出的巧妙。

# Note：

Reverse 函数接收两个interator参数，但这个是左开右闭区间。函数原句是： Reverses the order of the elements in the range [first,last)
 
因此Reverse(v.begin(),v.end()) 是转置整个数组，可以得出v.end()指向v的最后一个元素的下一个单元。其实所有C++标准库里涉及到范围的函数都以左闭右开的形式表示的。

