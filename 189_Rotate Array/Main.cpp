#include <iostream>
#include <vector>
#include "Solution.h"

using namespace std;

int main()
{
    Solution_3 s;
    vector<int> data = {1,2,3,4,5,6,7};
    int val = 3;
    s.rotate(data,val);
    for(int i=0;i<data.size();i++)
        cout<<data[i]<<' ';
    return 0;
}
