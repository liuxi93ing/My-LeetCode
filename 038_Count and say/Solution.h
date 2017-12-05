#include <string>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    string countAndSay(int n) {

        if(n<0)
            return NULL;

        vector<int> my_array = {1};
        stack<int> my_stack;

        int i, j,counting;
        for(i =1; i<n; i++)
        {
            while(my_array.size()>0)
            {
                counting = 0;
                my_stack.push(my_array.back());
                while(my_stack.top()==my_array.back()&&my_array.size()>0)
                {
                    my_array.pop_back();
                    counting++;
                }
                my_stack.push(counting);
            }

            while(!my_stack.empty())
            {
                my_array.push_back(my_stack.top());
                my_stack.pop();
            }
        }

        string str;
        for(i = 0; i<my_array.size();i++)
            str += my_array[i]+48;

        return str;

    }
};
