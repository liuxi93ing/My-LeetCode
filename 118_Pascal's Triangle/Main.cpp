#include <iostream>
#include <vector>
#include "Solution.h"

using namespace std;

void print_2D(vector<vector<int>> data){
    int i, j;
    for(i=0;i<data.size();i++){
        for(j=0;j<data[i].size();j++){
            cout<<data[i][j]<<' ';
        }
        cout<<'\n';
    }
}

int main()
{
    Solution s;
    int val = 5;
    vector<vector<int>> triangle;
    triangle = s.generate(val);
    print_2D(triangle);
    return 0;
}
