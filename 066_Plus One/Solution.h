#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i;
        int flag = 1,allNine = 1;
        for(i=digits.size()-1;i>=0;i--)
        {
            if(digits[i]!=9)
                allNine = 0;
            if(digits[i]==9&&flag==1)
                digits[i]=0;
            else if(digits[i]!=9)
            {
                digits[i]+= flag;
                flag = 0;
            }
        }
        if(!allNine)
            return digits;
        else
        {
            vector<int> new_digits(1,1);
            for(i=0;i<digits.size();i++)
                new_digits.push_back(0);
            return new_digits;
        }
    }
};
