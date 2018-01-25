#include <string>
#include <algorithm>
using namespace std;

class Solution_1{
public:
    string convertToTitle(int n) {
        string title;
        while(n!=0) {
            if(n%26==0) {
                title += 'Z';
                n = n/26 - 1;
            } else {
                title += 'A' - 1 + n%26;
                n = n/26;
            }

        }
        reverse(title.begin(),title.end());
        return title;
    }

};

class Solution_2{
public:
    string convertToTitle(int n) {
        string title;
        while(n!=0) {
            title += 'A' + (--n)%26;
            n = n/26;
        }
        reverse(title.begin(),title.end());
        return title;
    }

};
