#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;
class Solution
{
public:
    int evalRPN(vector<string> tokens)
    {
        stack<int> stk;
        for (int i = 0; i < tokens.size(); i++)
        {
            if (tokens[i] == "+")
            {
                int a = stk.top();
                stk.pop();
                int b = stk.top();
                stk.pop();
                int res = a + b;
                stk.push(res);
            }
            else if (tokens[i] == "-")
            {
                int a = stk.top();
                stk.pop();
                int b = stk.top();
                stk.pop();
                int res = b- a;
                stk.push(res);
            }
            else if (tokens[i] == "*")
            {
                int a = stk.top();
                stk.pop();
                int b = stk.top();
                stk.pop();
                int res = a * b;
                stk.push(res);
            }
            else if (tokens[i] == "/")
            {
                int a = stk.top();
                stk.pop();
                int b = stk.top();
                stk.pop();
                int res = b / a;
                stk.push(res);
            }

            else
            {

                stk.push(stoi(tokens[i]));
            }
        }
        cout << stk.top();
    }
    
};
int main()
{
    Solution s1;
    s1.evalRPN({"2","1","+","3","*"});
    s1.evalRPN({"4","13","5","/","+"});
    s1.evalRPN({"10","6","9","3","+","-11","*","/","*","17","+","5","+"});
    return 0;
}