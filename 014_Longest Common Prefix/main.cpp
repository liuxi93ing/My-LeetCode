#include <iostream>
#include <vector>
#include <string>
#include "Solution.h"

using namespace std;

int main()
{
    Solution s;

    string str2[] = {"abcdes", "ababae", "abaaaa"};
    vector<string> v_str{""};                               // 创建及初始化 vector<string>，可以用char* s[]数组或string数组来初始化
    vector<string> v_str2{"hello","world","nihao"};         // 可以直接初始化

    for(auto iterator = v_str.begin(); iterator!=v_str.end(); ++iterator)    //  访问vector<string>的每个string，auto为自动类型识别
        cout<< *iterator<< '\n';

    for(auto i_iter = v_str.begin(); i_iter!=v_str.end(); ++i_iter)    //  访问vector<string>的每个char，使用二重循环
        for(int j_iter = 0; j_iter<(*i_iter).size(); ++j_iter)         //  也可以把vector<string>当成二维字符串数组，用v_str[i][j]来获取字符
            cout<< (*i_iter)[j_iter]<<' ';
    cout<<'\n';

    cout<<"longest common prefix is: "<<s.longestCommonPrefix(v_str)<<endl;

    return 0;
}
