#include <algorithm>
#include <unordered_map>
using namespace std;

// using sort
class Solution_1 {
public:
    int majorityElement(vector<int>& nums) {
        int len = nums.size();
        sort(nums.begin(), nums.end());
        int i=0;
        while(nums[i]!=nums[i+len/2])
            i++;
        return nums[i];
    }

};

// using hash table(hash_map)
class Solution_2 {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> h_map;
        int counter = 0;
        for(int i = 0;i < nums.size();i++)
            h_map[nums[i]] += 1;
        for(auto j = h_map.begin();j != h_map.end();j++)
            if(j->second>=nums.size()/2+1)
                return j->first;
    }

};

//Moore Voting Algorithm
//This algorithm runs in O(n) time and O(1) space.
class Solution_3 {
public:
    int majorityElement(vector<int>& nums) {
        int num;
        int count = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(count == 0) {
                num = nums[i];
                count++;
            }else if(nums[i] == num) {
                count++;
            }else
                count--;
        }
        return num;
    }
};

// much slower than above three
class Solution_4 {
public:
    int majorityElement(vector<int>& nums) {
        int i=0,j=0;
        while(j<nums.size()) {
            if(nums[i]!=nums[j]) {
             // nums.erase(nums.begin()+j);
             // nums.erase(nums.begin()+i);
                nums[j]=nums[nums.size()-1];nums.resize(nums.size()-1);
                nums[i]=nums[nums.size()-1];nums.resize(nums.size()-1);
                i=0;
                j=0;
            }
            else j++;
        }
        return nums[0];
    }
};
