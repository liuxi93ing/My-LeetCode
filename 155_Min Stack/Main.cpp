#include <iostream>
#include "MinStack.h"

using namespace std;

int main()
{
    MinStack *obj = new MinStack();
    obj->push(5);
    obj->push(4);
    obj->pop();
    int param_3 = obj->top();
    int param_4 = obj->getMin();
    cout<<param_3<<' '<<param_4<<endl;
    return 0;
}
