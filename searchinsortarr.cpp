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
        int mid = 0;
        int a = 0;
        while (high - low >= 0)
        {
            mid = (high + low) / 2;
            // if (nums[mid] > target || nums[mid] < target)
            // {
            //     if (nums[low] == target)
            //     {
            //         a = low;
            //         break;
            //     }
            //     else if (nums[high] == target)
            //     {
            //         a = high;
            //         break;
            //     }

            //     else if (target < nums[low] && target < nums[high])
            //     {
            //         if (nums[high] < nums[low])
            //         {
            //             cout << "hello";
            //             low = mid + 1;
            //         }

            //         else
            //         {
            //             cout << "hel";
            //             high = mid - 1;
            //         }
            //     }
            //     else if (target > nums[low] && target > nums[high])
            //     {
            //         if (nums[mid + 1] > nums[mid])
            //         {
            //             low = mid + 1;
            //         }
            //         else
            //         {
            //             if (nums[high] < nums[low])
            //             {
            //                 high = mid - 1;
            //             }

            //             else
            //             {
            //                 cout << "heeee";
            //                 low = mid + 1;
            //                 // cout<<low;
            //             }
            //         }
            //     }

            //     else if (target > nums[low] && target < nums[high])
            //     {

            //         if (nums[high] < nums[low])
            //         {
            //             high = mid - 1;
            //         }

            //         else
            //         {

            //             low = mid + 1;
            //         }
            //     }
            //     else if (target < nums[low] && target > nums[high])
            //     {
            //         break;
            //     }
            // }

            if (target > nums[mid])
            {
                if (nums[mid] < nums[low] && target>=nums[low])
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }

            else if (target < nums[mid])
            {
             
                if (nums[mid] > nums[low] && nums[low]<=target)
                {
                    high = mid - 1;
                }
                else if (nums[mid]<nums[low])
                {
                    high=mid-1;
                }
                
                else
                {
                    low = mid + 1;
                }
            }

            else if (nums[mid] == target)
            {
                a = mid;

                break;
            }
        }
        if (nums[a] == target)
        {
            cout << a;
            return a;
        }
        else
        {
            cout << -1;
            return -1;
        }
    }
};
int main()
{
    Solution s1;
    // s1.search({4, 5, 6, 7, 0, 1, 2}, 0);
    // s1.search({3, 5, 1}, 3);
    // s1.search({1, 2, 3, 4, 5, 6}, 4);
    // s1.search({4, 5, 6, 7, 8, 1, 2, 3}, 8);
    //s1.search({5,1,3},3);
    s1.search({5,1,2,3,4},1);

    return 0;
}