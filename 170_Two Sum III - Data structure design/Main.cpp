#include <iostream>
#include <unordered_map>
#include "Solution.h"

using namespace std;

int main()
{
    TwoSum s ;
    s.add(1); s.add(3); s.add(5);
    cout<<s.find(4)<<endl;
    cout<<s.find(7)<<endl;
    return 0;
}
