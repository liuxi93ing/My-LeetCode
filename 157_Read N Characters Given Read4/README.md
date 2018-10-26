# Question: (Easy)

The API: int read4(char \*buf) reads 4 characters at a time from a file.

The return value is the actual number of characters read. For example, it returns 3 if there is only 3 characters left in the file.

By using the read4 API, implement the function int read(char \*buf, int n) that reads n characters from the file.

## Example 1:

>Input: buf = "abc", n=4 <br>
>Output: "abc"
>

## Example 2:
>Input: buf = "abcde", n=5 <br>
>Output: "abcde"

#解析：

第一点, 当n小于4时，返回值为read4()和n中小的那个。比如"ab",0 和"",2 都应返回0。

第二点, 当n大于4时，循环调用read4()直到n小于4, 循环中需考虑实际长度是否已用完。