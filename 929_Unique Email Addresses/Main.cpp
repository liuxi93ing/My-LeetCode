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
    vector<string> data = {"test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"};
    cout<<s.numUniqueEmails(data)<<endl;
    return 0;
}
