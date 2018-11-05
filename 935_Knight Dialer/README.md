# Question: (Medium)

A chess knight can move as indicated in the chess diagram below:
 

This time, we place our chess knight on any numbered key of a phone pad (indicated above), and the knight makes N-1 hops.  Each hop must be from one key to another numbered key.

Each time it lands on a key (including the initial placement of the knight), it presses the number of that key, pressing N digits total.

How many distinct numbers can you dial in this manner?

Since the answer may be large, output the answer modulo 10^9 + 7.

## Example 1:

>Input: 1 <br>
>Output: 10 <br>

## Example 2:

>Input: 2 <br>
>Output: 20 <br>

## Example 3:

>Input: 3 <br>
>Output: 46 <br>
 

## Note:

* 1 <= N <= 5000

# 解析：国际象棋中的马在手机九键盘上跳，在哪个键调一下等于按了一下那个键。输入可以跳的总次数，输出所有的跳法。

直观来看可以用dfs遍历出所有的可能，结果效率太低超时。仔细想一下发现要用动态规划的记忆化方法，用d(x,N)表示马当前在x键上，还可以跳N步，一共有的可能情况。初始状态为d(x,0) = 1, 递推公式为:

> d(x, N+1) = SUM{d(y, N)}, G(x,y)==1

最后所求的结果是 d(0,N)+d(1,N)+....d(9,N)

# 注：

当使用取模的办法来保证数值不会溢出时，每一步运算都要取模，因为每一步运算都有可能溢出。