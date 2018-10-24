# Question: (Easy)

Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.

# 解析：

错误的思路：判断左边和右边的个数是否一致，再判断是否存在基本不匹配的情况，如"(]"，"(}"，"{]" 等。但检查不出 "[(()])" 这样的情况。

正确的思路：检查正确的情况，循环删除所有合法的括号，即"()"，"[]"，"{}"。最后判读串是否为空。

最优的办法：利用栈。从左向右遍历：遇到左括号入栈；遇到右括号判读是否与刚入栈的匹配，匹配出栈，不配返回false。最后若栈为空返回true 