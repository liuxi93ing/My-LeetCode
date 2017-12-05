#include <vector>
using namespace std;

class Solution_1 {
public:
    int searchInsert(vector<int>& nums, int target) {

        if(nums.size()==0||target<=nums[0])
            return 0;
        if(target>nums.back())
            return nums.size();
        int i = 0;
        for(;i<nums.size()-1;++i)
        {
            if(nums[i]<target&&target<=nums[i+1])
                return i+1;
        }
    }
};

class Solution_2 {
public:
    int searchInsert(vector<int>& nums, int target) {

        if(nums.size()==0||target<nums[0])
            return 0;
        if(target>nums.back())
            return nums.size();

        int l = 0, r = nums.size()-1, mid;
        int i;
        while(l<r-1)
        {
            mid = (l+r)/2;
            if(target==nums[mid])
                return mid;
            else if(target<nums[mid])
                r = mid;
            else if(target>nums[mid])
                l = mid;
        }
        if(nums[l]==target)
            return l;
        else
            return r;
    }
};
