#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int trap(vector<int> height)
    {
        int n = height.size();
        int k = n - 1;
        int j = 0;
        int max_right = height[k];
        int max_left = height[j];
        int trap = 0;

        // for (int i = 0; i < n; i++)
        while (j < k)
        {
            if (max_right >= max_left)

            {
                j = j + 1;

                int a = max_left - height[j];
                if (a > 0)
                {
                    trap = trap + a;
                }
                max_left = max(height[j], max_left);
            }

            else if (max_right < max_left)
            {
                k = k - 1;

                int a = max_right - height[k];
                if (a > 0)
                {
                    trap = trap + a;
                }
                max_right = max(height[k], max_right);
            }
        }

        cout << trap;
    }
};
int main()
{
    Solution s1;
    s1.trap({0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1});

    return 0;
}