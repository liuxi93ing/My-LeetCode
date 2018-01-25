# Question: (Easy)

Given a positive integer, return its corresponding column title as appear in an Excel sheet.

## Example:

>    1 -> A  <br>
>    2 -> B  <br>
>    3 -> C  <br>
>    ...     <br>
>    26 -> Z  <br>
>    27 -> AA  <br>
>    28 -> AB   

# 解析;

典型的十进制数转化其他进制数的问题。此题10进制转化26进制。但陷阱在于：10进制最小的数应从0开始，此题中是1对应A。所以直接转化肯定错的。

方法一是特殊处理每一轮中能被26整除的情况。方法二是每一轮数据判断余数时先自减1，这样可以保证每轮余数是0-25与A-Z相对应。