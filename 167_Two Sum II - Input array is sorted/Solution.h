#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int index1 = 0;
        int index2 = 1;
        vector<int> res;

        while(numbers[index1]+numbers[index2]<target&&index2<numbers.size()-1)
            index2++;

        while(numbers[index1]+numbers[index2]!=target){
            if(numbers[index1]+numbers[index2]<target)
                index1++;
            else if(numbers[index1]+numbers[index2]>target)
                index2--;
        }
        res.push_back(index1+1);
        res.push_back(index2+1);
        return res;
    }
};
