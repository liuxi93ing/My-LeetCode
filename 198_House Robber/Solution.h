#include <algorithm>
#include <vector>
using namespace std;

class Solution_1{
public:
    int rob(vector<int>& nums) {
        int a = 0;
        int b = 0;
        for(int i=0;i<nums.size();i++) {
            if(i%2==0)
                a = max(a+nums[i],b);
            else
                b = max(b+nums[i],a);
        }
        return max(a,b);
    }

};

// 动态规划的思想
class Solution_2{
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return nums[0];

        //使用f[n] 来记录从第1家到第n家最大收益
        vector<int> f(nums.size(),0);
        f[0] = nums[0];
        f[1] = max(nums[0], nums[1]);
        for(int i=2; i<nums.size(); i++)
            f[i] = max(f[i-1], f[i-2]+nums[i]);  // 状态转移
        return f[nums.size()-1];
    }

};
