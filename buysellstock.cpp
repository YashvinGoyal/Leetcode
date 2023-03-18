#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    // int maxProfit(vector<int> prices)
    // {
    //     int n = prices.size();
    //     int max_profit=0;
    //     int r = n - 1;
    //     for (int i = 0; i < n; i++)
    //     {
    //         while (r > i)
    //         {
    //             int a = prices[r] - prices[i];
    //             if (a > max_profit)
    //             {
    //                 max_profit = a;
    //             }
    //             r--;
    //         }
    //         r=n-1;
    //     }

    //     cout << max_profit;
    // }

    int maxProfit(vector<int> prices)
    {
        int n = prices.size();
        int minva = prices[0];
        int max_profit = 0;
        for (int i = 1; i < n; i++)
        {
            if (prices[i] < minva)
            {
                minva = prices[i];
            }

            int profit = prices[i] - minva;
            max_profit = max(profit, max_profit);
        }

        cout<<max_profit;
    }
};
int main()
{
    Solution s1;
    s1.maxProfit({7, 1, 5, 3, 6, 4});

    return 0;
}