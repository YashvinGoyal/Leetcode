#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int findMin(vector<int> nums)
    {
        int low = 0;
        int high = nums.size() - 1;
        int mid;

        while (high - low >= 0)
        {
            mid = (low + high) / 2;
            if (nums[mid] > nums[low] && nums[mid] > nums[high])
            {
                if (nums[high] > nums[low])
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            else if (nums[mid] < nums[low] && nums[mid] < nums[high])
            {
                if (nums[high] > nums[low])
                {
                    low = mid;
                }
                else
                {

                    high = mid;
                }
            }

            else if (nums[mid] > nums[low])
            {
                high = mid - 1;
            }

            else if (nums[mid] > nums[high])
            {
                low = mid + 1;
            }

            else if (nums[mid] == nums[low] || nums[mid] == nums[high])
            {

                break;
            }
        }
        cout << nums[mid];
    }
};
int main()
{
    Solution s1;
    s1.findMin({3, 4, 5, 1, 2});
    // s1.findMin({4,5,6,7,0,1,2});
    // s1.findMin({11,13,15,17});
    // s1.findMin({5, 1, 2, 3, 4});

    return 0;
}