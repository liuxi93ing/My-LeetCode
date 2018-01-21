#include<vector>
using namespace std;

class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        last_index = data.size()-1;
    }

    void push(int x) {
        data.push_back(x);
        last_index++;
    }

    void pop() {
        if(last_index<0){
            throw "no data";
            return;
        }
        data.pop_back();
        last_index--;
    }

    int top() {
        if(last_index<0){
            throw "no data";
            return -1;
        }
        return data[last_index];
    }

    int getMin() {
        if(last_index<0){
            throw "no data";
            return -1;
        }
        int small = data[0];
        for(int i = 0;i<=last_index;i++){
            if(data[i]<small)
                data[i] = small;
        }
        return small;
    }
private:
    vector<int> data;
    int last_index;
};
