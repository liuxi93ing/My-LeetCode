# Question: (Easy)

Given an array of integers, find if the array contains any duplicates. Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.

# 解析：

使用hash-table来判读数组重复问题是常见题型。用数组里元素作为key，元素出现次数作为value。value可以初始化为0.

而本题中假定只需判定是否出现重复，因此可以使用元素的位置(index)当做hash-table的value。元素初始化为-1，元素第一次出现时，value记录当前位置。再次出现时，value值已经不为-1了，说明重复了。

# Note: 

map结构的key可以为任何数据类型，而数组的index只能是正整数。由于本题数据可以为负，所以不能使用简单数组，而要用unordered_map