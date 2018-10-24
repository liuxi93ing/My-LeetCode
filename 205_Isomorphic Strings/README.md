# Question: (Easy)

Given two strings s and t, determine if they are isomorphic.

Two strings are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character but a character may map to itself.

For example,
Given "egg", "add", return true.

Given "foo", "bar", return false.

Given "paper", "title", return true.

# 解析：

Isomorphic：同构的，同型的

理解本题的关键点在于：当str1中出现的所有重复字符，都要对应str2中的同一个字符。比如：“abcdefg”和“qwertyu”是同构的因为两个串中所有字符都只出现了一次，具体哪两个字符对应都无所谓。而“paper”和"title"中，p对应t，当p再次出现时也必须对应t。所以我们要建立起两个字符串中字符的映射关系，记录第一次出现的字符映射，当字符重复出现时查找之前的记录判断。既然记录映射关系自然想到hash table。

错误的尝试：使用一个map 记录 map['e'] = a, map['g'] = d; 再次出现map['g']判断是t[i]否为d。错误在于：不能判断多对一的情况如"abcd" 和 “aaaa”。而我们需要字符之间一一对应的关系。

正确的解法：使用两个map，记录smap['e']=tmap['t']=i;即用字符本次出现的位置i把两个字符联系到一起，当再次出现时，判断它们上次出现的位置是否相同，即比较smap[s[i]]和tmap[t[i]]。注意的是：smap[]下标中放的是字符，数组值为某字符出现的位置(可能为0)，因此数组开成256大小，初始化-1。 