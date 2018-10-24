#include <vector>
#include <unordered_map>
#include <cstdlib>
using namespace std;

class Solution{
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mymap;
        for(int i=0;i<nums.size();i++)
            mymap[nums[i]] = -1;

        for(int i=0;i<nums.size();i++){
            if(mymap[nums[i]]==-1)
                mymap[nums[i]] = i;
            else if(abs(i-mymap[nums[i]])<=k)
                return true;
            else mymap[nums[i]] = i;
        }
        return false;
    }
};
