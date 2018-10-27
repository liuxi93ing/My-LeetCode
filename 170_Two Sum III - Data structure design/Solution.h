
using namespace std;

class TwoSum {
public:
    unordered_map<int, int> DataMap;

    /** Initialize your data structure here. */
    TwoSum() {

    }

    /** Add the number to an internal data structure.. */
    void add(int number) {
        DataMap[number]++;
    }

    /** Find if there exists any pair of numbers which sum is equal to the value. */
    bool find(int value) {
        for(auto it = DataMap.begin(); it!=DataMap.end();it++)
        {
            if(value == 2*it->first&&it->second>=2)
                return true;
            else if(value != 2*it->first&&DataMap.find(value-it->first)!=DataMap.end())
                return true;
        }
        return false;
    }
};

/**
 * Your TwoSum object will be instantiated and called as such:
 * TwoSum obj = new TwoSum();
 * obj.add(number);
 * bool param_2 = obj.find(value);
 */
