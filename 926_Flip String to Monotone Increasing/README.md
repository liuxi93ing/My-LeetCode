# Question: (Medium)

A string of '0's and '1's is monotone increasing if it consists of some number of '0's (possibly 0), followed by some number of '1's (also possibly 0.)

We are given a string S of '0's and '1's, and we may flip any '0' to a '1' or a '1' to a '0'.

Return the minimum number of flips to make S monotone increasing.

## Example 1:

>Input: "00110" <br>
>Output: 1 <br>
>Explanation: We flip the last digit to get 00111. <br>

## Example 2:

>Input: "010110" <br>
>Output: 2 <br>
>Explanation: We flip to get 011111, or alternatively 000111. <br>

## Example 3:

>Input: "00011000" <br>
>Output: 2 <br>
>Explanation: We flip to get 00000000. <br>
 
## Note:

* 1 <= S.length <= 20000

* S only consists of '0' and '1' characters.

# 解析：

本题是给定一个二进制串，改动最少的位使之成为单调递增。单调递增串可以是 "00000", "0001111",或 "11111"。单调的串满足这样的条件: 第k位之前都是0，第k位之后都是1。我们用f(k)来表示第k位作为0和1分界处，运用动态规划的思想，可以发现f(k+1)和f(k)存在递推关系:

> f(k+1) = s[k+1]==1? (f(k) + 1): (f(k)-1); <br>

比如 原串 S = "01010"

>f(0)=3  改成"11111" <br>
>f(1)=2  改成"01111" <br>
>f(2)=3  改成"00111" <br>
>f(3)=2  改成"00011" <br>
>f(4)=3  改成"00001" <br>
>f(5)=2  改成"00000" <br>


