#include <iostream>
#include <vector>
#include <string>


using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string result;

        if(strs.empty())                                    // ��Ҫ�ж�����Ϊ�յ�������������ʹ��strs[0][j]ʱ�������д���
            return result;

        int j=0;
        char temp;
        while(j<strs[0].size())                             // �����Ե�һ�����ĳ�����Ϊѭ��������������ֻ��һ����ʱ��������ѭ��
        {
            temp = strs[0][j];
            for(auto i=strs.begin(); i!=strs.end();++i)     // ÿ���õ�һ��string�ĵ�j���ַ�������string��j���Ƚ�
            {
                if((*i)[j]!=temp)
                    return result;
            }
            result += temp;                                 // �������string����ͬһ���ַ���������ַ�д��result
            j++;                                            // ֻҪ��һ��string���������ַ�����������
        }

        return result;

    }
};
