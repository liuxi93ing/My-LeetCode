#include <iostream>
#include <cmath>
#include <vector>
#include <climits>

using namespace std;

class Solution{
public:
    int reverse(int x)
    {
        vector<int> temp;
        while(x/10!=0)
        {
            temp.push_back(x%10);
            x = x/10;
        }
        temp.push_back(x);

        int i;
        double addend = 0;
        double result = 0;
        for(i = 0; i<temp.size();i++)
        {
 //         cout<<temp[i]<<' '<<pow(10,temp.size()-i-1)<<' '<<temp[i]*pow(10,temp.size()-i-1) <<' '<<result <<endl;
            if(result> INT_MAX || result< INT_MIN)
                return 0;
            addend = temp[i]*pow(10,temp.size()-i-1);     // 如果addend是int型，此句会有精度丢失，应写成   addend = temp[i]*(int)round(pow(10,temp.size()-i-1));
            result += addend;
        }

        return (int)result;
    }

};
