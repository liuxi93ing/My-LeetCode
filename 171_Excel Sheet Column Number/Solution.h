#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution{
public:
    int titleToNumber(string s) {
        int i;
        int res = 0;
        reverse(s.begin(),s.end());
        for(i=0;i<s.size();i++)
            res += (int)pow(26,i)*(s[i]-'A'+1);
        return res;
    }

};
