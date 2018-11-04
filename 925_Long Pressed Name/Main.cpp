#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
#include "Solution.h"

using namespace std;

int main()
{
    Solution s;
    cout<<s.isLongPressedName("alex","aaleex")<<endl;
    cout<<s.isLongPressedName("saeed","ssaaedd")<<endl;
    cout<<s.isLongPressedName("leelee","lleeelee")<<endl;
    return 0;
}
