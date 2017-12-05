#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {

        if(s.empty())
            return 0;

        int i, counting = 0, flag = 0;
        for(i=s.length()-1;i>=0;i--)
        {
            if(flag==0&&s[i]==' ')
                continue;
            if(s[i]==' ')
                break;
            flag = 1;
            counting++;
        }
        return counting;
    }
};
