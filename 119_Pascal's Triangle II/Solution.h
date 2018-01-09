#include<vector>
using namespace std;

class Solution{
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(1,1);
        for(int i=0;i<rowIndex;i++)
            row=nextRow(row);
        return row;
    }

    vector<int> nextRow(vector<int> current){
        vector<int> next(1,1);
        for(int i=0;i<current.size()-1;i++){
            next.push_back(current[i]+current[i+1]);
        }
        next.push_back(1);
        return next;
    }

};
