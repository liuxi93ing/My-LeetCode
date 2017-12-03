#include <iostream>
#include <vector>
#include "Solution.h"

using namespace std;

int main()
{
    Solution s;
    vector<int> nums = {};
    int val = 1;
    int length = s.removeElement(nums,val);
    for(int i=0; i<length;i++)
        cout<< nums[i]<<' ';
    cout<<'\n';

    return 0;
}
