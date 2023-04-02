#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Solution
{
public:
    // vector<int> dailyTemperatures(vector<int> temperatures)
    // {
    //     vector<int> res;
    //     int count = 0;
    //     int check = 0;
    //     for (int i = 0; i < temperatures.size(); i++)
    //     {
    //         if (i <= temperatures.size() - 1)
    //         {
    //             for (int j = i + 1; j < temperatures.size(); j++)
    //             {
    //                 if (temperatures[i] < temperatures[j])
    //                 {
    //                     check = check + 1;

    //                     break;
    //                 }

    //                 else
    //                 {
    //                     count = count + 1;
    //                 }
    //             }
    //         }
    //         if (check == 0)
    //         {
    //             res.push_back(0);
    //         }
    //         else
    //         {
    //             int a = count + check;
    //             res.push_back(a);
    //         }
    //         count = 0;
    //         check = 0;
    //     }
    //     for (int i = 0; i < res.size(); i++)
    //     {
    //         cout << res[i];
    //     }
    // }

    vector<int> dailyTemperatures(vector<int> temperatures)
    {
        stack<pair<int, int>> stk;
        vector<int> vec;
        vec.assign(temperatures.size(), 0);
        // or vector<int>vec(temperatures.size(),0);
        stk.push({temperatures[0], 0});
        for (int i = 1; i < temperatures.size(); i++)
        {
            while ((stk.top().first < temperatures[i]))
            {

                vec[stk.top().second] = i - stk.top().second;
                stk.pop();

                if (stk.empty())
                {

                    break;
                }
            }

            stk.push({temperatures[i], i});
        }

        for (int j = 0; j < vec.size(); j++)
        {

            cout << vec[j];
        }
    }
};
int main()
{
    Solution s1;
    s1.dailyTemperatures({73, 74, 75, 71, 69, 72, 76, 73});
    // s1.dailyTemperatures({30, 40, 50, 60});
    // s1.dailyTemperatures({30, 60, 90});

    return 0;
}