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
                i--;                  // i-- 因为调用erase函数删除当前元素后，i值没变 但nums[i]已经表示下一个元素了，如果直接进入下一次循环就会跳过一个元素没有检查
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

        return index+1;             // index 表示的是下标，从0开始的，返回数组长度记得+1
    }
};
