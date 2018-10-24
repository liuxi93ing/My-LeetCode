#include <vector>
#include <algorithm>
using namespace std;

class Solution_1{
public:
    int countPrimes(int n) {
        int count = 0;
        for(int i=1;i<n;i++)
            if(IsPrime(i)) count++;
        return count;
    }

    bool IsPrime(int n){
        if(n<2) return false;
        if(n==2) return true;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }

};

class Solution_2{
public:
    int countPrimes(int n) {
        if(n<3) return 0;
        vector<int> prime = {2};
        for(int i=3;i<n;i++)
            IsPrime(prime,i);
        return prime.size();
    }

    bool IsPrime(vector<int> &prime,int n){
        if(n<prime.back())
            return true;

        for(int i=0;prime[i]*prime[i]<=n;i++){
            if(n%prime[i]==0) return false;
        }
        prime.push_back(n);
        return true;
    }

};


class Solution_3{
public:
    int countPrimes(int n) {
        if(n<3) return 0;
        vector<bool> arr(n,1);
        arr[0]=0;
        arr[1]=0;

        int count=0;
        for(int i=2;i<n;i++){
            if(arr[i]==1){
               for(int j=i+i; j<n; j=j+i){
                    arr[j]=0;
               }
               count++;
            }
        }
        return count;
    }

};
