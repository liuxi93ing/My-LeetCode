#Question: (Easy)

Design and implement a TwoSum class. It should support the following operations: add and find.

* add - Add the number to an internal data structure.
* find - Find if there exists any pair of numbers which sum is equal to the value.

## Example 1:

>add(1); add(3); add(5); <br>
>find(4) -> true <br>
>find(7) -> false <br>

## Example 2:

>add(3); add(1); add(2); <br>
>find(3) -> true <br>
>find(6) -> false <br>

## 解析；

1. 只需要用一张表(hastable)来记录每个数据及其出现次数即可，不需要记录原始数据的vector。

2. 仅判断 Map[value-a[i]]!=0是不够的，这样判断不出两个加数相同的情况，如 add(2)，find(4)。所以要特殊处理value==2*a[i]的情况。

3. 创建一个空的unorder_map后，可以直接调用 
``` cpp
Map[a[i]]++，
``` 
而不需要写成
``` cpp
if(Map.find(a[i])==Map.end()) 
	Map[a[i]] = 1;
else
	Map[a[i]]++;
```
的原因是当用[]运算符访问unordered_map<int,int>的元素时，若该key值得元素不存在时，会自动创建Map[key]并初始化为0。不会引起undefined behavior。