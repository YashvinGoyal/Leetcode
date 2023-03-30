#include <iostream>
#include <stack>
#include <vector>
using namespace std;
class MinStack
{
public:
    vector<int> stk;
    vector<int> mint;
    MinStack()
    {
    }

    void push(int val)
    {
        stk.push_back(val);
        if (mint.empty())
        {
            mint.push_back(val);
        }
        else
        {
            int b = min(val, mint[mint.size() - 1]);
            mint.push_back(b);
        }
    }

    void pop()
    {
        stk.pop_back();
        mint.pop_back();
    }

    int top()
    {
        int a = stk[stk.size() - 1];
        return a;
    }

    int getMin()
    {

        int minn = mint[mint.size() - 1];
        return minn;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
int main()
{

    return 0;
}