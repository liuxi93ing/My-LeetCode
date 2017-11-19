#include <iostream>
#include <vector>
#include "Solution.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Solution s;
    int data[] = {1,5,7,3,9};
    vector<int> a(data,data+5);
    vector<int> result = s.twoSum(a,12);

    int i;
    for(i = 0; i<result.size(); i++)
        cout<<result[i]<<" ";
    return 0;
}
