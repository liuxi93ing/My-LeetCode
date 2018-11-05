#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include "Solution.h"

using namespace std;

int main()
{
    Solution s;
    vector<int> res = s.beautifulArray(5);
    for(int i=0; i<res.size(); i++)
        cout<<res[i]<<' ';
    return 0;
}
