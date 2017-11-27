#include <iostream>
#include <string>

#include "Solution.h"

using namespace std;

int main()
{
    Solution s;
    Solution s2;
    string str1("{}[]()");
    string str2("{[}])");
    string str3("{[]([()})");
    int op = 0;

    while(op!=-1)
    {
        cin>>op;
        switch(op)
        {
            case 1:cout<< s.isValid(str1)<<endl;break;
            case 2:cout<< s.isValid(str2)<<endl;break;
            case 3:cout<< s.isValid(str3)<<endl;break;
            default: break;
        }
    }

    return 0;
}
