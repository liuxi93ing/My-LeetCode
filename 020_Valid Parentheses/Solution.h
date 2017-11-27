#include <iostream>
#include <string>

using namespace std;

class Solution {
public:

/*
    bool isValid(string s) {

        int parentheses = 0, brackets = 0, braces = 0;
        for(auto i = s.begin();i!=s.end();++i)
        {
            switch(*i)
            {
                case '(': parentheses++; break;
                case ')': parentheses--; break;
                case '[': brackets++; break;
                case ']': brackets--; break;
                case '{': braces++; break;
                case '}': braces--; break;
                default : break;
            }
        }

        if(!(parentheses==0&&brackets==0&&braces==0))
            return false;
        if(s.find("(]")!=-1)
            return false;
        if(s.find("(}")!=-1)
            return false;
        if(s.find("[}")!=-1)
            return false;
        if(s.find("[)")!=-1)
            return false;
        if(s.find("{]")!=-1)
            return false;
        if(s.find("{)")!=-1)
            return false;

        return true;
    }
    */
    bool isValid(string s) {

     while(s.find("()")!=-1||s.find("[]")!=-1||s.find("{}")!=-1)
     {
         if(s.find("()")!=-1)
            s.erase(s.find("()"),2);
         if(s.find("[]")!=-1)
            s.erase(s.find("[]"),2);
         if(s.find("{}")!=-1)
            s.erase(s.find("{}"),2);
     }

     if(s.empty())
        return true;
     else
        return false;

    }

};
