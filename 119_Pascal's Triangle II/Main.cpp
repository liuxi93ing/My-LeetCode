#include <iostream>
#include <vector>
#include "Solution.h"

using namespace std;

int main()
{
    Solution s;
    int val = 2;
    vector<int> row;
    row = s.getRow(val);
    for(int i=0;i<row.size();i++)
        cout<<row[i]<<' ';
    return 0;
}
