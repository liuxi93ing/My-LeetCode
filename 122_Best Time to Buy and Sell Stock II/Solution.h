#include <vector>
using namespace std;

class Solution{
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;
        int buy = prices[0];
        int profit = 0;
        int sum = 0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<buy) buy = prices[i];
            else {
                profit = prices[i] - buy;
                sum += profit;
                buy = prices[i];
            }
        }
        return sum;
    }
};
