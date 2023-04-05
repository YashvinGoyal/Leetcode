#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int search(vector<int> nums, int target)
    {
        int low = 0;
        int high = nums.size() - 1;
        int mid;
        while (high - low > 1)
        {
            mid = (high + low) / 2;
        
            if (nums[mid] > target)
            {
                high = mid - 1;
                
            }

            else if (nums[mid] == target)
            {
                low = mid;
            }

            else
            {
                low = mid + 1;
            }
        }
        // if (nums[mid] == target)
        // {
        //     cout << mid;
        // }
        if (nums[low] == target)
        {
            cout << low;
        }
        else if (nums[high] == target)
        {
            cout << high;
        }
        else
        {
            cout << -1;
        }
    }
};
int main()
{
    Solution s1;
    s1.search({-1, 0, 3, 5, 9, 12}, 9);
    // s1.search({-1, 0, 3, 5, 9, 12}, 2);
    // s1.search({-1, 0, 3, 5, 9, 12}, 9);

    return 0;
}