
using namespace std;

class Solution {
public:

    int graph[10][10];
    int hops[10][5001];

    int knightDialer(int N) {
        int cnt = 0;

        memset(graph, 0, sizeof(graph));
        memset(graph, 0, sizeof(hops));
        graph[0][4] = graph[4][0] = 1;
        graph[0][6] = graph[6][0] = 1;
        graph[1][6] = graph[6][1] = 1;
        graph[1][8] = graph[8][1] = 1;
        graph[2][7] = graph[7][2] = 1;
        graph[2][9] = graph[9][2] = 1;
        graph[3][4] = graph[4][3] = 1;
        graph[3][8] = graph[8][3] = 1;
        graph[4][9] = graph[9][4] = 1;
        graph[6][7] = graph[7][6] = 1;

        for(int i = 0; i<10; i++)
            hops[i][1] = 1;

        for(int i = 2; i<=N; i++)
        {
            for(int j = 0; j<10; j++)
            {
                for(int k = 0; k<10; k++)
                {
                    if(graph[j][k]==1)
                    {
                        hops[j][i] += hops[k][i-1]%1000000007;
                        hops[j][i] %= 1000000007;
                    }
                }
              //  if(j==0)  cout<<i<<' '<<j<<' '<<hops[j][i]<<endl;
            }
        }

        for(int j=0; j<10; j++)
        {
            cnt += (hops[j][N]);
            cnt %= 1000000007;
        }
        return cnt;
    }
};

