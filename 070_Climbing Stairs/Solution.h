#include <vector>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
/*
        if(n==1)
            return 1;
        else if(n==2)
            return 2;
        else if(n>2)
            return climbStairs(n-1)+climbStairs(n-2);
*/

/*
        int a1 = 0;
        int a2 = 1;
        int temp = 1;
        for(int i=1;i<=n;i++)
        {
            temp = a2;
            a2 = a2 +a1;
            a1 = temp;
        }
        return a2;
 */

        vector<int> a(n+1, 0);
        if (n==0) return 0;
        if (n==1) return 1;

        a[0] = 1;
        a[1] = 1;

        for (int i = 2; i <=n ; i++)
            a[i] = a[i-1]+a[i-2];


        return a[n];


    }
};
