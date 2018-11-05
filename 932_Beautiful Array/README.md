# Question: (Medium)

For some fixed N, an array A is beautiful if it is a permutation of the integers 1, 2, ..., N, such that:

For every i < j, there is no k with i < k < j such that A[k] * 2 = A[i] + A[j].

Given N, return any beautiful array A.  (It is guaranteed that one exists.)

## Example 1:

>Input: 4 <br>
>Output: [2,1,4,3] <br>

## Example 2:
 
>Input: 5 <br>
>Output: [3,1,2,5,4] <br>
 
## Note:

* 1 <= N <= 1000

# 解析：此题解法相当巧妙，用已有的beautiful array来构造新的beautiful array。比如我们有{2,1,3}，我们把它乘2得到{4,2,6}也是beautiful array，把它乘2再减1得到{3,1,5}也是beautiful array。把两个乘后得到的结果连接到一起就有{4,2,6,1,3,5} 还是beautiful。 这样我们就由N==3的array构造除了N==6的array。整个过程可以看做是一个动态规划的过程，f(n)表示长度为n的beautiful array，递推公式为：

> f(2n) = 2f(n)-1 + 2f(n)

初始状态为 f(1) = {1}。