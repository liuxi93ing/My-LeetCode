# Question: (Easy)

Implement strStr().

Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

## Example 1:

>Input: haystack = "hello", needle = "ll" <br>
>Output: 2

## Example 2:

>Input: haystack = "aaaaa", needle = "bba" <br>
>Output: -1

# 解析：

方法一：从头遍历主串，当匹配到子串的第一个字符时，判断后面的是否完全匹配，若匹配返回，不匹配继续遍历主串下一个字符

方法二：若子串长于主串直接返回。双重循环，外层遍历主串，内层比较haystack[i+j]和needle[j]。不需遍历完所有主串字符，当主串剩余长度小于子串，不用继续遍历。 

