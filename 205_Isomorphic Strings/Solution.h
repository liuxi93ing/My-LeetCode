#include <vector>
#include <string>
using namespace std;

class Solution{
public:

/*  wrong solution

    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector<int> smap(256,-1);

        for(int i=0; i<s.size(); i++) {
            if(smap[s[i]]==-1) smap[s[i]]=t[i];
            else if(smap[s[i]]!=t[i]) return false;
        }

        return true;
    }
*/

    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector<int> smap(256,-1);
        vector<int> tmap(256,-1);

        for(int i=0; i<s.size(); i++) {
            if(smap[s[i]]!=tmap[t[i]]) return false;
            smap[s[i]]=tmap[t[i]]=i;
        }

        return true;
    }

};
