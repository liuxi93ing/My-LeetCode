# Question: (Easy)

Write a function that takes an unsigned integer and returns the number of ’1' bits it has (also known as the Hamming weight).

For example, the 32-bit integer ’11' has binary representation 00000000000000000000000000001011, so the function should return 3.

## 解析：

使用bitset<32> 直接生成32位的二进制数组。数1的个数即可。