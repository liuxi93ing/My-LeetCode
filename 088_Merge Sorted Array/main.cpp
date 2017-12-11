#include <iostream>
#include <vector>
#include "Solution.h"
using namespace std;

int main()
{
    Solution s;
    vector<int> arr1 = {1,1,1,1};
    vector<int> arr2 = {1,1};
    int m = arr1.size();
    int n = arr2.size();
    arr1.resize(m+n);
    s.merge(arr1,m,arr2,n);
    for(int i = 0;i<arr1.size();i++)
        cout<<arr1[i]<<' ';
    cout<<endl;
    return 0;
}
