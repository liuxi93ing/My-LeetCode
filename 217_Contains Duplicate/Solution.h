#include <vector>
#include <unordered_map>
using namespace std;

class Solution{
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> h_t;
        for(int i=0;i<nums.size();i++)
            h_t[nums[i]]=-1;

        for(int i=0;i<nums.size();i++){
            if(h_t[nums[i]]==-1) h_t[nums[i]]=i;
            else return true;
        }
        return false;
    }
};
