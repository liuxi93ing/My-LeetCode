# Question: (Easy)

Find the contiguous subarray within an array (containing at least one number) which has the largest sum.

For example, given the array `[-2,1,-3,4,-1,2,1,-5,4]`,
the contiguous subarray `[4,-1,2,1]` has the largest sum = `6`.

## More practice:

If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.

# 解析：

contiguous 相邻的

错误思路：虽然子数组的极端情况可能是一个数据或整个数组。通常情况子数组为原数组中间一段，由于整个数组和固定，要使子数组和最大，就是让子数组左边和右边截取的两段的和最小。进行两次次一层循环，找出左段最小和时下标i，再找出右段最小和时下标j。然后合理判断i，j大小，截出正确范围。

只能求解总sum大于0的情况。当绝大多数数据小于0时，左段右段和都会取整个数组，没有意义。

正确思路一：O(n)。数据可以分如下几种情况：全为正，全为负，有正有负。当全为正时，取整个串；全为负时，取最大的一个负数；有正有负时(大多数情况)，可以保证的是最大和至少是正数。由此着手，用CurrentMax记录当前和，从第一个数据开始，依次把后面每个数据加到CurrentMax上，并记录下来当前取到过的最大和SofarMax。每次循环判断CurrentMax的正负，若CurrentMax为正，它就有潜力超过SofarMax，因此继续往上加后面的数。若CurrentMax加成了负数，之前加的这一段数可以舍弃了，继续往上加只会拖累后面的数据。这时使currentMax=nums[i]，新的起点开始加。最后返回SofarMax。 

不考虑O(n2)的解法。