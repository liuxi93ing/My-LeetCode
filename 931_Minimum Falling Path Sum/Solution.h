
using namespace std;

class Solution{
public:

    int min(int a, int b, int c){
        if(a<=b&&a<=c) return a;
        if(b<=a&&b<=c) return b;
        if(c<=a&&c<=b) return c;
    }

    int min(int a, int b)
    {
        return a<=b? a:b;
    }

    int minFallingPathSum(vector<vector<int>>& A) {

        int len = A.size();
        if(len==1) return A[0][0];

        vector<vector<int>> res(len,vector<int>(len));
        int i, j;
        int outcome = 100001;
        for(j = 0; j<len; j++)
            res[len-1][j] = A[len-1][j];

        for(i = len-2; i>=0; i--)
        {
            for(j = 0; j<len; j++)
            {
                if(j==0) res[i][j] = A[i][j] + min(res[i+1][j], res[i+1][j+1]);
                else if(j==len-1) res[i][j] = A[i][j] + min(res[i+1][j-1], res[i+1][j]);
                else res[i][j] = A[i][j] + min(res[i+1][j-1], res[i+1][j], res[i+1][j+1]);

  //              cout<<i<<' '<<j<<' '<<res[i][j]<<endl;
            }
        }

        for(j = 0; j<len; j++)
            outcome = min(outcome, res[0][j]);

        return outcome;
    }
};
