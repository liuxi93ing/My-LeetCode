#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include "Solution.h"

using namespace std;

int main()
{
    Solution s;
    vector<vector<int>> data = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<s.minFallingPathSum(data)<<endl;
    return 0;
}
