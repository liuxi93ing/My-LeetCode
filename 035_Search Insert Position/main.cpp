#include <iostream>
#include <vector>
#include "Solution.h"

using namespace std;

int main()
{
    Solution_2 s;
    vector<int> nums = {1,3};
    int val = 1;
    cout<<s.searchInsert(nums, val);
    return 0;
}
