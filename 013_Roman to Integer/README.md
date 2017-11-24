# Question: (Easy)

Given a roman numeral, convert it to an integer.

Input is guaranteed to be within the range from 1 to 3999.

# 解析:

罗马数字表示法：

基本符号:

I : 1

V : 5

X : 10

L : 50

C ：100

D ：500

M ：1000

重复次数: 一个符号重复几次, 就是几倍，最多到3倍。III = I + I + I = 3

左减右加：看小符号在大符号哪边，在左：大减小。 如：IV = V-I = 5-1 = 4 、 DC = D + C = 500 + 100 = 600 

按位表示: 如 1999， 不是 M IM （1000-1+1000）。而是 M CM XC IX （1000 + 900 + 90 + 9）
		  如 49  不是 IL（50-1）。 而是 XL IX （40 + 9）
		  
		  所以 大符号减小符号只适合临近的符号（位数相同），即（IV, IX） （XL, XC）（CD, CM）
		  
# 思路：

先把所有符号加起来，如把IX(9) 当XI(11) 加，没出现一个IX，说明多加了2，最后减去就行。

IV或IX都减2，XL或XC都减20，CD或CM都减200。 它们每个只可能出现一次