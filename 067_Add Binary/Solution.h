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
        string c, carry;
        carry += '0';
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

            if(a[i]+b[i]+carry[i]=='1'+'1'+'1')
            {
                c += '1';
                carry += '1';
            }
            else if(a[i]+b[i]+carry[i]=='1'+'1'+'0')
            {
                c += '0';
                carry += '1';
            }
            else if(a[i]+b[i]+carry[i]=='1'+'0'+'0')
            {
                c += '1';
                carry += '0';
            }
            else if(a[i]+b[i]+carry[i]=='0'+'0'+'0')
            {
                c += '0';
                carry += '0';
            }
        }
        if(carry[i]=='1')
            c += carry[i];
        for(i=0; i<c.length()/2; i++)
            swap(c[i],c[c.length()-i-1]);
        return c;
    }
};


class Solution_2 {
public:
    string addBinary(string a, string b) {
        if(a.empty()&&b.empty())
            return "0";

        int m = a.length(), n = b.length();
        int i, j;
        int op1 = 0, op2 = 0, sum = 0, carry = 0;
        string c = "";
        for(i=m-1,j=n-1;i>=0||j>=0;i--,j--)
        {
            if(i<0) op1 = 0;             // 判断a串是否已加完
            else op1 = a[i] - '0';       // 字符转int， -'0'等价于-48
            if(j<0) op2 = 0;
            else op2 = b[j] - '0';

            cout<<"current op1 is "<<op1<<endl;
            cout<<"current op2 is "<<op2<<endl;
            sum = op1^op2^carry;        // 计算当前sum， 计算二进制相加是异或操作
            carry = op1&op2 || op1&carry || op2&carry;   // 计算下一个carry值， 我们需要当前op1，op2,carry中至少两个为1时，新carry为1，使用这个算式。

            sum = sum + '0';
            c =  (char)sum + c;
            cout<<"current c is "<<c<<endl;
            cout<<"next carry is "<<carry<<endl;
        }

        if(carry == 1)
            c = '1' + c;
        return c;
    }
};
