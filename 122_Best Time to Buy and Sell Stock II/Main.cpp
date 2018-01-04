#include <iostream>
#include <vector>
#include "Solution.h"

using namespace std;

int main()
{
    Solution s;
    vector<int> prices = {1,2,1,2,1,2};
    cout<<s.maxProfit(prices)<<endl;
    return 0;
}
