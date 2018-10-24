#include <string>
#include <iostream>
#include <vector>
using namespace std;

// construct new string with all possible substrings
class Solution{
public:
    bool repeatedSubstringPattern(string s) {
        if(s.empty()) return false;

        string substring;
        string newstring;
        for(int i=1;i<s.size()/2+1;i++){
            substring.assign(s.begin(),s.begin()+i);
            newstring = substring;
            while(newstring.size()<s.size())
                newstring += substring;

            if(newstring.size()!=s.size())
                continue;
            else if(newstring.compare(s)==0)
                return true;
        }

        return false;
    }

};

// smart solution, yet much faster
// a valid input should at least is "aa"
class Solution_2{
public:
    bool repeatedSubstringPattern(string s) {
        string ss = s + s;
        ss.pop_back();
        return ss.find(s,1)!=string::npos;
    }

};
