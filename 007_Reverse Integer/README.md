# Question: (Easy)

Given a 32-bit signed integer, reverse digits of an integer.

## Example 1:

>Input: 123 <br>
>Output: 321

## Example 2:

>Input: -123 <br>
>Output: -321

## Example 2:

>Input: 120 <br>
>Output: 21

## Note:

Assume we are dealing with an environment which could only hold integers within the 32-bit signed integer range. 
For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

# 解析:

<climit> 头文件中定义了 数据类型的上下限

本题关键在于处理数据溢出。开始思考时陷入了思维误区：当一个范围大于int的数据作为参数传入后，接收到的数据肯定是合法的int数据(–2,147,483,648 ~ 2,147,483,647)。因此不可能判断输入数据是否溢出，因此需要判断的是输出数据是否溢出。另一个判断数据是否溢出的理由是：可能存在输入未溢出(2,147,483,656),输入溢出(6,563,847,412)。

另: 把大于signed int的数据传入signed int时，C++ 标准未规定，不同编译器有不同实现。标准规定了unsigned int 溢出的处理：取模。

本程序采用了较为无脑的方法判断溢出: 用比int大的数据类型存放输出，这样直接和int的上下限比较即可。

若用int类型来存放输出，需要比较溢出的前一步运算。如下一步运算 a * 10 的结果可能溢出，此时比较a和 INT_MIN/10, INT_MAX/10。 