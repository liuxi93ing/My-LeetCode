#include <iostream>
#include <vector>
#include "Solution.h"

using namespace std;

int main()
{
    Solution s;
    vector<int> data = {1,3,5,6,5,4};
    int val = 2;
    cout<<s.containsNearbyDuplicate(data,val)<<endl;
    return 0;
}
