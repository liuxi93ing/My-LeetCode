#include <iostream>
#include <vector>
#include <string>
#include "Solution.h"

using namespace std;

int main()
{
    Solution s;

    string str2[] = {"abcdes", "ababae", "abaaaa"};
    vector<string> v_str{""};                               // ��������ʼ�� vector<string>��������char* s[]�����string��������ʼ��
    vector<string> v_str2{"hello","world","nihao"};         // ����ֱ�ӳ�ʼ��

    for(auto iterator = v_str.begin(); iterator!=v_str.end(); ++iterator)    //  ����vector<string>��ÿ��string��autoΪ�Զ�����ʶ��
        cout<< *iterator<< '\n';

    for(auto i_iter = v_str.begin(); i_iter!=v_str.end(); ++i_iter)    //  ����vector<string>��ÿ��char��ʹ�ö���ѭ��
        for(int j_iter = 0; j_iter<(*i_iter).size(); ++j_iter)         //  Ҳ���԰�vector<string>���ɶ�ά�ַ������飬��v_str[i][j]����ȡ�ַ�
            cout<< (*i_iter)[j_iter]<<' ';
    cout<<'\n';

    cout<<"longest common prefix is: "<<s.longestCommonPrefix(v_str)<<endl;

    return 0;
}
