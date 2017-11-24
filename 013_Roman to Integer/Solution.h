#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    int romanToInt(string s) {

        int I = 0, V = 0, X = 0, L = 0, C = 0, D = 0, M =0;
        int IV = 0, IX = 0, XL = 0, XC = 0, CD = 0, CM = 0;

        int i = 0;
        for(i = 0; i<s.length(); i++)
        {
            switch(s[i])
            {
                case 'I': I++; break;
                case 'V': V++; break;
                case 'X': X++; break;
                case 'L': L++; break;
                case 'C': C++; break;
                case 'D': D++; break;
                case 'M': M++; break;
                default: break;
            }
        }


        if(s.find("IV")!=-1)        // 由于IV等只能出现小于1次，find()成功返回位置，失败返回-1
            IV++;
        if(s.find("IX")!=-1)
            IX++;
        if(s.find("XL")!=-1)
            XL++;
        if(s.find("XC")!=-1)
            XC++;
        if(s.find("CD")!=-1)
            CD++;
        if(s.find("CM")!=-1)
            CM++;

        return I*1+V*5+X*10+L*50+C*100+D*500+M*1000-(IV+IX)*2-(XL+XC)*20-(CD+CM)*200;
    }
};
