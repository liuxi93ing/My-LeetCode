# Question: (Easy)

Reverse bits of a given 32 bits unsigned integer.

For example, given input 43261596 (represented in binary as 00000010100101000001111010011100), return 964176192 (represented in binary as 00111001011110000010100101000000).

## Follow up:

If this function is called many times, how would you optimize it?

# 解析：

方法一：把n转化成二进制，即把给依次把n%2的余数入栈，这样栈中所存结果即为逆序的二进制数。出栈过程中计算出十进制数。需要注意的是：本意要把整个32位逆序，原数n转化二进制过程中，不足32位的地方要补0。

方法二：直接使用位运算，在数位上操作。初始化res为全0，每次判断n的末尾，如果为1，res末尾变为1。然后n右移一位，res左移一位。一共循环32次。要注意两点：1）每次循环判断n的一位，n只需右移31次，最后一次循环结束后n回到初始状态，但res为了写满32位数，必须只左移31次。2）判断尾数用 n & 1， 添加尾数用 res | 1。

方法三：其实是方法一的升级版，使用显示的数据结构bitset。bitset<32> x(n) 可以直接得到32位的二进制数组x。倒转后，二进制转化回去使用to_ulong()。