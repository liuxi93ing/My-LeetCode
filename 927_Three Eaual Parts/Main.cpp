#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
#include "Solution.h"

using namespace std;

int main()
{
    Solution s;
    vector<int> data = {1,0,1,1,0,1,0,1,0,1,0,1};
    vector<int> cuts = s.threeEqualParts(data);
    cout<<cuts[0]<<cuts[1]<<endl;
    return 0;
}
