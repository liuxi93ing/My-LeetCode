#include<vector>
using namespace std;

class Solution{
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> row(1,1);
        vector<vector<int>> triangle;

        for(int i=0;i<numRows; i++){
            triangle.push_back(row);
            row = nextRow(row);
        }
        return triangle;
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
