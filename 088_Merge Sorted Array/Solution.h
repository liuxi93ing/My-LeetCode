#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        vector<int> temp(m+n,0);
        int i=0, j=0, k=0;
        while(i<m+n&&j<m&&k<n)
        {
            if(nums1[j]<=nums2[k])
                temp[i++] = nums1[j++];
            else if(nums1[j]>nums2[k])
                temp[i++] = nums2[k++];
        }
        while(j<m)
            temp[i++] = nums1[j++];
        while(k<n)
            temp[i++] = nums2[k++];
        for(i=0; i<m+n;i++)
            nums1[i] = temp[i];
    }
};
