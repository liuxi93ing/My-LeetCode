#include <iostream>
#include <vector>
#include "Solution.h"

using namespace std;

int main()
{
    Solution_4 s;
    vector<int> data = {1,1,3,4,1};
    cout<<s.majorityElement(data)<<endl;
    return 0;
}
