#include <iostream>
#include <string>
#include "Solution.h"

using namespace std;

int main()
{
    Solution s;
    string str1 = "egg";
    string str2 = "add";
    cout<<s.isIsomorphic(str1,str2)<<endl;
    return 0;
}
