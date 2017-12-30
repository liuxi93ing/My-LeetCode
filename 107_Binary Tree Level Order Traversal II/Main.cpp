#include <iostream>
#include "Solution.h"

using namespace std;

void print_2D_vector(vector<vector<int>> array){
    int i, j;
    for(i=0;i<array.size();i++)
        for(j=0;j<array[i].size();j++)
            cout<<array[i][j]<<' ';
    cout<<endl;
    cout<<"array size is:"<<i<<endl;
}

int main(){
    Solution_2 s;

    int pre_a[] = {1,2,6,5,3,7};
    int in_a[] = {6,2,5,1,3,7};
    int pre_b[] = {};
    int in_b[] = {};
    int len_a = sizeof(pre_a)/sizeof(pre_a[0]);
    int len_b = sizeof(pre_b)/sizeof(pre_b[0]);
    TreeNode* root_a = create_Tree(pre_a,in_a,len_a);
    TreeNode* root_b = create_Tree(pre_b,in_b,len_b);

    cout<<"pre order:"<<endl;
    pre_order_print(root_a);
    cout<<endl;

    cout<<"bottem-up level order:"<<endl;
    print_2D_vector(s.levelOrderBottom(root_a));

    return 0;
}
