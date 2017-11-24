#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
    bool isPalindrome(int x){

        if(x<0)
            return false;

        vector<int> temp;
        while(x!=0)
        {
            temp.push_back(x%10);
            x = x/10;
        }

        int i = 0, j = temp.size()-1;
        while(i<j)
        {
  //        cout << "i is "<< i <<" temp[i] is "<< temp[i]<<" j is "<< j <<" temp[j] is "<< temp[j] << endl;
            if(temp[i++]!=temp[j--])
                return false;
        }

        return true;
    }

};
