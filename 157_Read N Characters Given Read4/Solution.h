
using namespace std;

// Forward declaration of the read4 API.
int read4(char *buf);

class Solution {
public:
    /**
     * @param buf Destination buffer
     * @param n   Maximum number of characters to read
     * @return    The number of characters read
     */
    int read(char *buf, int n) {
        if(buf==NULL) return 0;
        int act_num = 0;
        int temp = 0;
        char *p = buf;
        while(n>4)
        {
            p = p + temp;
            temp = read4(p);
            act_num += temp;
            n -= temp;
            if(temp<4) return act_num;
        }
        temp = read4(p+temp);
        act_num += temp<n ? temp : n;
        return act_num;
    }
};
