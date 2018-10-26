#include <iostream>
#include "Solution.h"

using namespace std;

int main()
{
    Solution s;
    char *buf = "abcd";
    cout<<s.read(buf,0)<<endl;
    return 0;
}
