
using namespace std;

class Solution{
public:
    int minFlipsMonoIncr(string S) {
        if(S.size()==0) return 0;
        int min;
        int cnt = 0;
        for(int i = 0; i<S.size(); i++)
            if(S[i]=='0') cnt++;
        min = cnt;
        for(int i = 0; i<S.size(); i++){
            if(S[i]=='0') cnt--;
            else cnt++;
            min = min<cnt? min:cnt;
        }
        return min;
    }

};
