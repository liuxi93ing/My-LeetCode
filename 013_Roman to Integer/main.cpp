#include <iostream>
#include <string>
#include "Solution.h"

using namespace std;

int main()
{
    Solution s;
    string str;
    getline(cin,str);
    cout<<s.romanToInt(str)<<endl;
    return 0;
}
