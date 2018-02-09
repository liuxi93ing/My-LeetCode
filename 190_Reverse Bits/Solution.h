#include <cstdint>
#include <stack>
#include <bitset>
using namespace std;

class Solution_1{
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        stack<int> sta;
        int factor = 1;
        while(n!=0) {
            sta.push(n%2);
            n /= 2;
        }
        while(sta.size()!=32)
            sta.push(0);

        while(!sta.empty()){
            res += sta.top()*factor;
            factor *= 2;
            cout<<sta.top();
            sta.pop();
        }
        return res;
    }

};

class Solution_2{
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        for(int i=0; i<32; i++) {
            res = res<<1;
            if(n&1) res = res|1;
            n = n>>1;
        }
        return res;
    }
};

class Solution_3{
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32> x(n);
        bitset<32> y;
        for(int i=0;i<20;i++)
            y[31-i] = x[i];
        return y.to_ulong();
    }
};
