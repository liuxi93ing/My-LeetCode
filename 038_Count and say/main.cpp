#include <iostream>
#include <string>
#include "Solution.h"
using namespace std;

int main()
{
    Solution s;
    string str;
    int val = 5;
    str = s.countAndSay(val);
    cout<<str<<endl;
    return 0;
}
