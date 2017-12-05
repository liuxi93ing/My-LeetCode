#include <iostream>
#include <vector>
#include "Solution.h"
using namespace std;

int main()
{
    Solution s;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<s.maxSubArray(nums)<<endl;
    return 0;
}
