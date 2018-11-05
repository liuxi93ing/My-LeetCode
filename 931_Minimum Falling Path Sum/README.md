# Question: (Medium)

Given a square array of integers A, we want the minimum sum of a falling path through A.

A falling path starts at any element in the first row, and chooses one element from each row.  The next row's choice must be in a column that is different from the previous row's column by at most one.

## Example 1:

>Input: [[1,2,3],[4,5,6],[7,8,9]] <br>
>Output: 12 <br>
>Explanation:  <br>
>The possible falling paths are: <br>
>[1,4,7], [1,4,8], [1,5,7], [1,5,8], [1,5,9] <br>
>[2,4,7], [2,4,8], [2,5,7], [2,5,8], [2,5,9], [2,6,8], [2,6,9] <br>
>[3,5,7], [3,5,8], [3,5,9], [3,6,8], [3,6,9] <br>
>The falling path with the smallest sum is [1,4,7], so the answer is 12. <br>

## Note:

* 1 <= A.length == A[0].length <= 100

* -100 <= A[i][j] <= 100

# 解析：标准的动态规划题，数字三角形题型的稍微变种。使用记忆化方法自底而上找出最优解。

## 注：

1. 同时需要两者比较和三者比较时，可以自己重载min(int a, int b), min(int a, int b, int c).

2. 创立二维数组的方式： vector<vector<int>> A(len,vector<int>(len));
