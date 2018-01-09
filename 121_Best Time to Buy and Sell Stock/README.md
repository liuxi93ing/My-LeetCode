# Question: (Easy)

Say you have an array for which the ith element is the price of a given stock on day i.

If you were only permitted to complete at most one transaction (ie, buy one and sell one share of the stock), design an algorithm to find the maximum profit.

## Example 1:

>Input: [7, 1, 5, 3, 6, 4] <br>
>Output: 5				<br>
>
>max. difference = 6-1 = 5 (not 7-1 = 6, as selling price needs to be larger than buying price)

## Example 1:

>Input: [7, 6, 4, 3, 1] <br>
>Output: 0				<br>
>
>In this case, no transaction is done, i.e. max profit = 0.

# 解析:

如果输入是一个单调递减或持续不变的序列，利润为0。只要前面出现的任意一个数大于后面的，就会有利润。

记录买入价和利润。买入价永远是越小越好。利润为当前价格减去买入价，利润下限为0。遍历数列，当前价格如果小于买入价，记录为买入价，若大于买入价判断是否有更大利润。