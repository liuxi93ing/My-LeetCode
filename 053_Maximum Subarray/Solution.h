#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int SofarMax = nums[0];
        int CurrentMax = nums[0];
        for(int i=1; i<nums.size();i++)
        {
            CurrentMax > 0? CurrentMax += nums[i]:CurrentMax = nums[i];
            if(CurrentMax > SofarMax)
                SofarMax = CurrentMax;
        }
        return SofarMax;
    }
};
