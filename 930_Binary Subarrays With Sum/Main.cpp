#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include "Solution.h"

using namespace std;

int main()
{
    Solution s;
    vector<int> data = {1,0,1,0,1};
    int val = 2;
    cout<<s.numSubarraysWithSum(data,val)<<endl;
    return 0;
}
