# Question: (Easy)

Given an integer n, return the number of trailing zeroes in n!.

## Note: Your solution should be in logarithmic time complexity.

# 解析：

计算出n！来数有多少个0是肯定是不对的。看到题最直观的思路是数出乘数中包含多少个末尾是2,5,0的数。因为2,5,0结尾都能贡献末尾的0，每一对2和5贡献一个0，每一个0贡献一个0。再仔细思考发现不用特意去凑末尾为2的数，因为只要是偶数就贡献一个因数2，只需要考虑末尾为5和0的乘数就行。这样这道题貌似就是要找多少个乘数是5的倍数，用n/5取整就能得到。

但题目没有这么简单，测试发现输入49时正确结果为10，比49/5多了1个。检查发现是因为25一共贡献了两个因数5，但n/5只算了一个。因此这道题的正确表示为：找出n！中包含多少个因数5。5的倍数贡献一个5,25的倍数共享两个5,125的倍数贡献3个5...

方法一：使用循环。counter += n/pow(5,i++);

方法二：递归。递归很巧，第一次递归就消去了所有包含一个5的因数的数。直到没有消的了。可以说循环几次就递归几次。