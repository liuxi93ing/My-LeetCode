
using namespace std;

class Solution{
public:

    int sum(int n){
        return n*(n+1)/2;
    }

    int numSubarraysWithSum(vector<int>& A, int S) {

        vector<int> zeros;
        int temp = 0;
        for(int i = 0; i<A.size(); i++){     // 记录每个1之前有多少个0
            if(A[i]==0) temp++;
            else if(A[i]==1){
                zeros.push_back(temp);
                temp = 0;
            }
        }
        zeros.push_back(temp);              // 记录最后一个1后面的0，包含一个1没有的情况。这样zeros就储存了所有1之间的0的个数。

//        for(int i=0; i<zeros.size(); i++)
//            cout<<zeros[i]<<endl;

        int res = 0;
        if(S==0){                           // 所求和为0的情况
            for(int i = 0; i<zeros.size(); i++)
                res += sum(zeros[i]);
        }

        if(S!=0){                           // 所求和大于0的情况
            int front = 0;
            int rear = front+S;
            while(rear<zeros.size()){
                res += (zeros[front]+1)*(zeros[rear]+1);
                front++;
                rear++;
            }
        }
        return res;
    }
};
