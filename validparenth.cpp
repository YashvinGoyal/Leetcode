#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <stack>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stk;
        map<char, char> mapp;
        mapp[')'] = '(';
        mapp['}'] = '{';
        mapp[']'] = '[';
        if (s.length() % 2 != 0)
        {
            cout << "false";
            return false;
        }

        // else if (s[0]==')'||s[0]=='}'||s[0]==']')
        // {
        //     cout<<"false";
        //     return false;
        // }
        

        else
        {
            for (int i = 0; i < s.length(); i++)
            {
                
                if (s[i] == '{' || s[i] == '[' || s[i] == '(')
                {
                    stk.push(s[i]);
                }
                else if (!stk.empty())
                
                {
                    if (mapp[s[i]] == stk.top())
                    {
                        stk.pop();
                    }
                }

                else if(stk.empty()){
                    cout<<"false";
                    return false;
                }
            }
            if (stk.empty())
            {
                cout << "true";
                return true;
            }
            else
            {
                cout << "false";
                return false;
            }
        }
    }
};
int main()
{
    Solution s1;
    // s1.isValid("()");
    // s1.isValid("()[]{}");
    s1.isValid( "]{");

    return 0;
}