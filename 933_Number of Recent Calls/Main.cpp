#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <algorithm>
#include "Solution.h"

using namespace std;

int main()
{
    RecentCounter * obj = new RecentCounter();
    cout<<obj->ping(1)<<' ';
    cout<<obj->ping(100)<<' ';
    cout<<obj->ping(3001)<<' ';
    cout<<obj->ping(3002)<<' ';

    return 0;
}
