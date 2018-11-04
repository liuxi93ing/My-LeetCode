
using namespace std;

class Solution{
public:

    vector<int> threeEqualParts(vector<int>& A) {
        vector<int> res(2, -1);
        int cntOnes = 0, i = 0;
        for(i = 0; i<A.size(); i++)
            if(A[i]==1) cntOnes++;
    //    cout<<cntOnes<<endl;

        if(cntOnes==0){
            res[0] = 0;
            res[1] = A.size()-1;
            return res;
        }
        if(cntOnes%3!=0)
            return res;

        int k = cntOnes/3;
        int start = 0, mid = 0, end = 0, cnt = 0;
        for(i = 0; i<A.size(); i++)
            if(A[i]==1) {start = i; break;}

        for(i = 0; i<A.size(); i++){
            if(A[i]==1) {cnt++;}
            if(cnt==k+1) {mid = i; break;}
        }

        cnt = 0;
        for(i = 0; i<A.size(); i++){
            if(A[i]==1){cnt++;}
            if(cnt==2*k+1) {end = i; break;}
        }

        while(end!=A.size()&&A[start]==A[mid]&&A[mid]==A[end]){
            start++; mid++; end++;
        }

        if(end==A.size()){
            res[0] = start-1;
            res[1] = mid;
            return res;
        }

        return res;
    }
};
