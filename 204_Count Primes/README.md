# Question: (Easy)

Count the number of prime numbers less than a non-negative number, n.

# 解析：

方法一：最容易想到试除法，对从0到n-1的每一个数，写一个IsPrime(num)函数判读是否为素数，是的话count++，最后返回count。对IsPrime()的优化包括：不用遍历到num，遍历到sqrt(num)即可。
初步优化后此方法仍然超时。

方法二：对方法一的进一步优化。在IsPrime(num)函数中，并不需要用num除以2到sqrt(num)中的每一个数，只需要除以2到sqrt(num)中的素数即可，这样可以大大减少运算此时。因此此题演变成：我们已知0\~k中的素数，用已知的素数来判断k~n之间的素数，每发现一个新的，就添加到已知的素数序列中用于下一个数的判断。与方法一相比属于使用空间换时间。
时间上可以通过测试。

方法三：筛选法。比前两种方法更快，但空间开销最大。开辟一个大小为n的数组，数组下标表示每个数子，数组值全初始化为1表示全是素数。手动a[0],a[1]赋0，从i=2开始，如果值a[i]为1，把a[i+ki]全都赋为0。同时计数。把数组开成bool型时间消耗小于开成整形。


# 注：素数非负