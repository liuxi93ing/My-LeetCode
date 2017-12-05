#include <iostream>
#include <vector>
#include "Solution.h"

using namespace std;

int main()
{
    Solution s;
    vector<int> nums = {9};
    vector<int> nums_2 = s.plusOne(nums);
    for(auto i = nums_2.begin();i!=nums_2.end();i++)
        cout<<*i;
    return 0;
}
