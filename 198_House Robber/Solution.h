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

// ��̬�滮��˼��
class Solution_2{
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return nums[0];

        //ʹ��f[n] ����¼�ӵ�1�ҵ���n���������
        vector<int> f(nums.size(),0);
        f[0] = nums[0];
        f[1] = max(nums[0], nums[1]);
        for(int i=2; i<nums.size(); i++)
            f[i] = max(f[i-1], f[i-2]+nums[i]);  // ״̬ת��
        return f[nums.size()-1];
    }

};
