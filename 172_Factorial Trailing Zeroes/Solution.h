#include <cmath>
using namespace std;

class Solution{
public:
    int trailingZeroes(int n) {
        int res = 0;
        int i = 1;
        while((n/pow(5,i))!=0)
            res += n/pow(5,i++);
        return res;
    }

};


class Solution_1{
public:
    int trailingZeroes(int n) {
        if(n<5) return 0;
        else return n/5+trailingZeroes(n/5);
    }

};
