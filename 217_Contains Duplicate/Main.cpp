#include <iostream>
#include <vector>
#include "Solution.h"

using namespace std;

int main()
{
    Solution s;
    vector<int> data = {1,2,2,3,4,5};
    cout<<s.containsDuplicate(data)<<endl;
    return 0;
}
