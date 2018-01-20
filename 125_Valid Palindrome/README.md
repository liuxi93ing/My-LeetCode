# Question: (Easy)

Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

For example,

"A man, a plan, a canal: Panama" is a palindrome.

"race a car" is not a palindrome.

## Note:

Have you consider that the string might be empty? This is a good question to ask during an interview.

For the purpose of this problem, we define empty string as valid palindrome.

# 解析:

题目较简单，使用cctype库中 isalnum() 可判读一个字符是否是字母或数字。首尾光标向中间逼近，跳过不是的。还用到tolower()函数。