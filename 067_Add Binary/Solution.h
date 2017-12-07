#include <iostream>
#include <string>
#include <cmath>
#include <time.h>

using namespace std;

class Solution_1 {
public:
    string addBinary(string a, string b) {

        if(a.empty()&&b.empty())
            return "0";

        int i = 0;
        int m = a.length(), n = b.length();
        int l = m>n? m:n;
        string c, flag;
        flag += '0';
        for(i=0; i<m/2; i++)
            swap(a[i],a[m-1-i]);
        for(i=0; i<n/2; i++)
            swap(b[i],b[n-1-i]);
        if(m>n)
            for(i=n;i<m;i++)
                b += '0';
        else if(n>m)
            for(i=m;i<n;i++)
                a += '0';

        for(i=0; i<l;i++)
        {

            if(a[i]+b[i]+flag[i]=='1'+'1'+'1')
            {
                c += '1';
                flag += '1';
            }
            else if(a[i]+b[i]+flag[i]=='1'+'1'+'0')
            {
                c += '0';
                flag += '1';
            }
            else if(a[i]+b[i]+flag[i]=='1'+'0'+'0')
            {
                c += '1';
                flag += '0';
            }
            else if(a[i]+b[i]+flag[i]=='0'+'0'+'0')
            {
                c += '0';
                flag += '0';
            }
        }
        if(flag[i]=='1')
            c += flag[i];
        for(i=0; i<c.length()/2; i++)
            swap(c[i],c[c.length()-i-1]);
        return c;
    }
};


class Solution_2 {
public:
    string addBinary(string a, string b) {
        string rs = "";
        int n1 = a.size(), n2 = b.size(), carry = 0;
        for (int i = n1 - 1, j = n2 - 1; i >= 0 || j >= 0; i--, j--) {
            int op1, op2;
            if (i >= 0) op1 = a[i] - '0';
            else op1 = 0;
            if (j >= 0) op2 = b[j] - '0';
            else op2 = 0;
            int sum = op1 ^ op2 ^ carry;
            rs = (char)(sum + '0') + rs;
            carry = op1 & op2 | op1 & carry | op2 & carry;
        }
        if (carry) rs = '1' + rs;
        return rs;
    }
};
