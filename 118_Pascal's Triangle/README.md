# Question: (Easy)

Given numRows, generate the first numRows of Pascal's triangle.

For example, given numRows = 5,

Return

>[				<br>
>     [1],		<br>
>    [1,1],		<br>
>   [1,2,1],	<br>
>  [1,3,3,1],	<br>
> [1,4,6,4,1]	<br>
>]

# 解析：
Pascal's triangle 即杨辉三角。

思路：双重循环，外层循环遍历每一层，内层循环由上一层数列加出下一层数列。即两头的1已确定，把中间的数加出来。