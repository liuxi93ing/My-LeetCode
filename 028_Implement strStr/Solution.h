#include <string>

using namespace std;

// my solution, slow in performance
class Solution_1 {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0)
            return 0;

        int i, j,index;
        for(i=0;i<haystack.length();i++)
        {
            j=0;
 //         cout<<i<<' '<<haystack[i]<<' '<<j<<' '<<needle[j]<<endl;
            if(haystack[i]==needle[j])
            {
                index = i;
                while(haystack[i]==needle[j]&&j<needle.size()&&i<haystack.size())
                {
                    i++;
                    j++;
                }
                if(j==needle.size())
                    return index;
                i--;
            }

        }
        return -1;
    }
};

// similar idea with solution, more efficient and clean
class Solution_2 {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()>haystack.size())
            return -1;

        int i, j,index;
        for(i=0;i<=haystack.length()-needle.length();i++)
        {
            for(j=0;j<needle.length();j++)
            {
                if(haystack[i+j]!=needle[j])
                    break;
            }
            if(j==needle.length())
                return i;
        }
        return -1;
    }
};
