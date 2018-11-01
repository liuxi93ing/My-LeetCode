# Question: (Easy)

You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security system connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given a list of non-negative integers representing the amount of money of each house, determine the maximum amount of money you can rob tonight without alerting the police.

# 解析：

本题是要求出一个数组中不相隔元素最大和，数组元素非负。以如下数组为例：

{1,2,5,3,8,1,4,9}

直观来看为了尽量多取到元素，从头开始遍历，每间隔一个取一次。就是1,5,8,4或者2,3,1,9。但实际上正确结果是1,5,8,9可以看出8和9之间间隔了两个数，但肯定不会出现间隔三个数的情况。因此我们发现可以把数据分成每两个一组，(1,2),(5,3),(8,1),(4,9)每组中必定且只能取到一个数据。因此我们在循环过程中用a,b两个变量分别记录“当前单号和”和“当前双号和”。对于每一个新加入的数据，根据下标单双情况做如下更新：a=max(a+n[i],b)或b=max(b+n[i],a)。这样可以解决这种情况：单号之前一直占有，突然双号出现一个大数足以逆转，下一次循环更新单号数据时，单号的历史记录就会切换到双号这边a=b，也就意味着当前单号数据没有加上，跳过了两个元素。换而言之，a,b总是存储当前最大和，但分别判断新元素是否要加入。 

用动态规划的思想更容易理解，此题类比于上台阶问题。状态转移方程为f[i] = max(f[i-1], f[i-2]+n[i])。