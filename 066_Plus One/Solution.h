#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i;
        int carry = 1,allNine = 1;
        for(i=digits.size()-1;i>=0;i--)
        {
            if(digits[i]!=9)
                allNine = 0;
            if(digits[i]==9&&carry==1)
                digits[i]=0;
            else if(digits[i]!=9)
            {
                digits[i]+= carry;
                carry = 0;
            }
        }
        if(allNine)
            digits.insert(digits.begin(),1);

        return digits;
    }
};
