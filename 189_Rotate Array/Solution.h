#include <vector>
#include <algorithm>
using namespace std;

// employ an auxiliary vector
class Solution_1{
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(!n)  return;
        k = k%n;
        vector<int> temp(nums.end()-k,nums.end());
        for(int i=0;i<n-k;i++)
            temp.push_back(nums[i]);
        nums = temp;
    }

};

//no extra space
class Solution_2{
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(!n)  return;
        k = k%n;
        while(k>0) {
            nums.insert(nums.begin(),nums[n-1]);
            nums.pop_back();
            k--;
        }
    }

};

//use three times reverse, amazing!
class Solution_3{
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(!n)  return;
        k = k%n;
        reverse(nums.begin(),nums.begin()+n-k);
        reverse(nums.begin()+n-k,nums.end());
        reverse(nums.begin(),nums.end());
    }

};
