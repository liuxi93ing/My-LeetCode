# Question: (Easy)

Write an algorithm to determine if a number is "happy".

A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.

Example: 19 is a happy number

>  1/*1 + 9/*9 = 82
>  8/*8 + 2/*2 = 68
>  6/*6 + 8/*8 = 100
>  1/*1 + 0/*0 + 0/*0 = 1


#解析：不论多大的数，经过若干次变换后肯定会归于[1*1,9*9+9*9],因此归于1之前的数肯定是1或10或100。比如1->1,13/31->10,68/86->100，但继续倒推不出完了，还有肯5555->100，因此穷举是不现实的。只好在循环中逐个数计算。本题的关键在于循环跳出条件，如果不归为1无限循环如何处理。

方法一：经过实验，发现(1)Int范围内最大的数，经过1次变化后都会缩小到3位数大小.(2)如果能归为到1,一半5次时候就会结束。因此我们设定一个最大循环次数t,t次循环内还没有归到1说明永远不可能了。t=6即通过测试。

方法二：经过分析发现如果不归到1，会归到一个固定一个序列反复循环,如

>24
>20
>4
>16
>37
>58
>89
>145
>42
>20

就有了环的出现，归到1也是用环的出现1->1->1->1....因此可以使用链表中判断是否有环出现的方法，使用快慢指针，快指针总会追上慢指针，判读追上时的数值是否为1。