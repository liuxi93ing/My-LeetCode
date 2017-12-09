using namespace std;

class Solution_1 {
public:
    int mySqrt(int x) {
        int i;
        for(i=0;i<=x;i++)
        {
            if(i*i<=x&&(i+1)*(i+1)>x&&(i+1)*(i+1)/(i+1)==i+1)
                return i;
            else if((i+1)*(i+1)/(i+1)!=i+1)
                return i;
        }

    }
};


class Solution_2 {
public:
    int mySqrt(int x) {

        int left = 0;
        int right = x;
        long long mid;          // mid �����long long�ͣ�mid*mid�;Ͳ������
        while(left<=right)
        {
            mid = left+(right-left)/2;
            if(mid*mid == x)
                return mid;
            else if(mid*mid < x)
                left = mid+1;
            else if(mid*mid > x)
                right = mid-1;
        }
        if(left>right)
            return mid-1;;

    }
};
