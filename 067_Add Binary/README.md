# Question: (Easy)

Given two binary strings, return their sum (also a binary string).

## Example:

>a = "11" <br>
>b = "1" <br>
>Return "100".

# 解析：

我的解答: 字符串转置(把个位转化到低位)，补0，创建进位数组。从i=0加到i=n-1，相加时用字符判断，转置加完字符串。

优质解答：从i=n-1加到i=0，判读时转成int型的0或1，用位运算符判断。

# 笔记：

当使用[]来访问string或vector中元素时，不会进行越界检查。 可以访问到超过size()的数据。比如创建了一个字符串string str，这时str的长度是0，当使用str[i]来对string赋值时不会报错，但str的长度不会变，所以cout<<str时没数据输出。当数组长度不固定时，逐个操作数数组元素，string类型可以使用+=来扩容， 如 str = “prefix” + str 或 str = str + “suffix”。对于vector类型，使用insert或pushback。

位运算操作符都是把int数变成对应的二进制在运算。如a=5(101) b=7(111), a^b 结果是2(010)。所以只有当a，b的值为0或1时，a,b只有一位，对其进行为运算结果等于a，b本身运算结果。