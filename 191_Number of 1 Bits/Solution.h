#include <bitset>
using namespace std;

class Solution{
public:
    int hammingWeight(uint32_t n) {
        bitset<32> x(n);
        int counter = 0;
        for(int i=0;i<32;i++)
            if(x[i]) counter++;
        return counter;
    }

};
