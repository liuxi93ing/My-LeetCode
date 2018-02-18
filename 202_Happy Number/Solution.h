#include <string>
using namespace std;

class Solution{
public:
    bool isHappy(int n) {
        string num = to_string(n);
        int i = 0;
        int sum = 0;
        int t = 6;
        while(t--){
            for(i=0;i<num.size();i++)
                sum += (num[i]-'0')*(num[i]-'0');

            if(sum==100||sum==10||sum==1)
                return true;
            else{
                num = to_string(sum);
                sum = 0;
            }
        }
        return false;
    }
};
