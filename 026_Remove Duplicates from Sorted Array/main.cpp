#include <iostream>
#include <vector>
#include "Solution.h"

using namespace std;

int main()
{
    Solution_1 s_1;
    Solution_2 s_2;
    vector<int> v_sorted = {1,2,2,3,3,4};

    cout<< "length is:"<<s_2.removeDuplicates(v_sorted)<<endl;

    for(int i =0; i<s_2.removeDuplicates(v_sorted);i++)
        cout<< v_sorted[i]<<' ';
    return 0;
}
