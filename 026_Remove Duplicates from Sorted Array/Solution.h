#include <vector>

using namespace std;

class Solution_1 {
public:
    int removeDuplicates(vector<int>& nums) {

        if(nums.size()==0)
            return 0;
        int i;
        for(i=0; i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums.erase(nums.begin()+i);
                i--;                  // i-- ��Ϊ����erase����ɾ����ǰԪ�غ�iֵû�� ��nums[i]�Ѿ���ʾ��һ��Ԫ���ˣ����ֱ�ӽ�����һ��ѭ���ͻ�����һ��Ԫ��û�м��
            }
            else
                continue;
        }

        return nums.size();
    }
};

class Solution_2 {
public:
    int removeDuplicates(vector<int>& nums) {

        if(nums.size()==0)
            return 0;
        int i;
        int index = 0;
        for(i=0; i<nums.size();i++)
        {
            if(nums[i]>nums[index])
                nums[++index] = nums[i];
        }

        return index+1;             // index ��ʾ�����±꣬��0��ʼ�ģ��������鳤�ȼǵ�+1
    }
};
