#include <iostream>
#include <vector>
#include "Solution.h"

using namespace std;

int main()
{
    Solution s;
    vector<int> arr = {1,2,3,4,1,3,2};
    cout<<s.singleNumber(arr)<<endl;
    return 0;
}
