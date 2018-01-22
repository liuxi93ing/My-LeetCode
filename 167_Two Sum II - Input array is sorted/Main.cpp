#include <iostream>
#include <vector>
#include "Solution.h"

using namespace std;

int main()
{
    Solution s;
    vector<int> data = {2,3,5,8,13,20,21,66};
    vector<int> index;
    int val = 18;
    index = s.twoSum(data,val);
    cout<<index[0]<<' '<<index[1]<<endl;
    return 0;
}
