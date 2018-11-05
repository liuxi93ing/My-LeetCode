
using namespace std;

class Solution{
public:
    int numUniqueEmails(vector<string>& emails) {
        string temp = "";
        unordered_map<string, int> map;
        int i = 0, j = 0;
        for(i = 0; i<emails.size(); i++)
        {
            j = 0;
            temp.clear();
            while(emails[i][j]!='+'&&emails[i][j]!='@')
            {
                if(emails[i][j]=='.')
                {j++; continue;}
                temp += emails[i][j++];
            }
  //          cout<<temp<<endl;
            while(emails[i][j]!='@')
                j++;
            while(j<emails[i].size())
                temp += emails[i][j++];
  //          cout<<temp<<endl;
            map[temp]=1;
        }
 //       for(auto it = map.begin(); it!=map.end(); it++)
 //           cout<<it->first<<endl;
        return map.size();
    }


};
