#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
class Solution
{
public:
    int carFleet(int target, vector<int> position, vector<int> speed)
    {
        int count = 0;
        stack<pair<int, int>> stk;
        vector<pair<int, int>> vec;
        for (int i = 0; i < position.size(); i++)
        {
            vec.push_back({position[i], speed[i]});
        }
        sort(vec.begin(), vec.end());

        stk.push({vec[vec.size() - 1].first, vec[vec.size() - 1].second});
        for (int i = vec.size() - 2; i >= 0; i--)
        {
            double a = static_cast<double>((target - stk.top().first)) / stk.top().second;
            double b = static_cast<double>((target - vec[i].first)) / vec[i].second;
            // cout << a << " " << b;
            if (a >= b)
            {
                stk.top().second = min(stk.top().second, vec[i].second);
                // cout<<stk.top().second<<endl;
            }

            else
            {
                stk.push({vec[i].first, vec[i].second});
            }
        }

        cout << stk.size();
    }
};
int main()

{
    Solution s1;
    // s1.carFleet(12,{10,8,0,5,3},{2,4,1,1,3});
    s1.carFleet(10.00, {6, 8}, {3, 2});

    return 0;
}