# Question: (Easy)

Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

## Note:
You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2. The number of elements initialized in nums1 and nums2 are m and n respectively.

# 解析：

最快的方法就是借助辅助数组记录合并好的结果，最后写回数组1。时间复杂度为O(n)。

# 笔记：

函数接收整形参数 m, n。 不能声明数组 a[m+n], 但可以vector来实现，如：vector<int> a(m+n,0)。结果也是开辟了m+n长的数组并初始化为0。