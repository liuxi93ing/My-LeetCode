#include <iostream>
#include <string>
#include "Solution.h"

using namespace std;

int main()
{
    Solution s;
    int val = 28;
    string title = s.convertToTitle(val);
    cout<<title<<endl;
    return 0;
}
