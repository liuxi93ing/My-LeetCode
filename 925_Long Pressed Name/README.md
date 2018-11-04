# Question: (Easy)

Your friend is typing his name into a keyboard.  Sometimes, when typing a character c, the key might get long pressed, and the character will be typed 1 or more times.

You examine the typed characters of the keyboard.  Return True if it is possible that it was your friends name, with some characters (possibly none) being long pressed.

## Example 1:

>Input: name = "alex", typed = "aaleex" <br>
>Output: true <br>
>Explanation: 'a' and 'e' in 'alex' were long pressed. <br>

##Example 2:

>Input: name = "saeed", typed = "ssaaedd" <br>
>Output: false <br>
>Explanation: 'e' must have been pressed twice, but it wasn't in the typed output. <br>

## Example 3:

>Input: name = "leelee", typed = "lleeelee" <br>
>Output: true <br>

## Example 4:

>Input: name = "laiden", typed = "laiden" <br>
>Output: true <br>
>Explanation: It's not necessary to long press any character. <br>

## Note: 

* name.length <= 1000
 
* typed.length <= 1000

* The characters of name and typed are lowercase letters.

# 解析：

本题关键点在于：name中的每一个字母 type中都至少有一个与之对应。两个串同时遍历，注意判断是否同时结束遍历。