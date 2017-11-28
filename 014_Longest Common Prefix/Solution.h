#include <iostream>
#include <vector>
#include <string>


using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string result;

        if(strs.empty())                                    // 需要判断输入为空的情况，否则后面使用strs[0][j]时出现运行错误
            return result;

        int j=0;
        char temp;
        while(j<strs[0].size())                             // 若不以第一个串的长度作为循环条件，当输入只有一个串时，会无限循环
        {
            temp = strs[0][j];
            for(auto i=strs.begin(); i!=strs.end();++i)     // 每次用第一个string的第j个字符和其他string第j个比较
            {
                if((*i)[j]!=temp)
                    return result;
            }
            result += temp;                                 // 如果所有string都有同一个字符，把这个字符写入result
            j++;                                            // 只要有一个string不包含该字符，函数返回
        }

        return result;

    }
};
