# Question: (Easy)

Related to question Excel Sheet Column Title

Given a column title as appear in an Excel sheet, return its corresponding column number.

## Example:

>    A -> 1     <br>
>    B -> 2		<br>
>    C -> 3		<br>
>    ...		<br>
>    Z -> 26	<br>
>    AA -> 27	<br>
>    AB -> 28 

# 解析：

找出些更多规律：

>    AZ -> 52 <br>
>    BA -> 53 <br>
>    ...		<br>
>    YZ -> 676 (26*26) <br>
>    ZA -> 677	<br>
>    ...		<br>
>    ZZ -> 702 (27*26) <br>
>    AAA -> 703 <br>

比10进制数字转化为26进制字母简单，A-Z对应1-26,进一位乘26即可。当前字母s[i]对应值为s[i]-'A'+1。