
using namespace std;

class Solution{
public:

    int sum(int n){
        return n*(n+1)/2;
    }

    int numSubarraysWithSum(vector<int>& A, int S) {

        vector<int> zeros;
        int temp = 0;
        for(int i = 0; i<A.size(); i++){     // ��¼ÿ��1֮ǰ�ж��ٸ�0
            if(A[i]==0) temp++;
            else if(A[i]==1){
                zeros.push_back(temp);
                temp = 0;
            }
        }
        zeros.push_back(temp);              // ��¼���һ��1�����0������һ��1û�е����������zeros�ʹ���������1֮���0�ĸ�����

//        for(int i=0; i<zeros.size(); i++)
//            cout<<zeros[i]<<endl;

        int res = 0;
        if(S==0){                           // �����Ϊ0�����
            for(int i = 0; i<zeros.size(); i++)
                res += sum(zeros[i]);
        }

        if(S!=0){                           // ����ʹ���0�����
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
