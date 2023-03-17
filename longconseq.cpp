#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int longestConsecutive(vector<int> nums)
    {
        int count = 0;
        int maxx = 0;

        // cout<<nums.size()<<endl;
        sort(nums.begin(), nums.end());
        // cout<<nums[nums.size()-1]-nums[nums.size()-2]<<endl;
        if (nums.size() == 0)
        {
            maxx = 0;
        }
        else if (nums.size() == 1)
        {
            maxx = 1;
        }

        else
        {
            int a = nums[nums.size() - 2];

            for (int i = 0; i < nums.size(); i++)
            {
                if (i == nums.size() - 1)

                {
                    if (nums[i] - a == 1)
                    {
                        nums[i] = 1;
                    }
                    else
                    {

                        nums[i] = 0;
                    }
                }
                else
                {
                    if (nums[i + 1] - nums[i] == 1)
                    {
                        nums[i] = 1;
                    }
                    else
                    {
                        nums[i] = 0;
                    }
                }
            }
            for (int i = 0; i < nums.size(); i++)
            {
                //cout << nums[i] << " ";
                if (nums[i] == 1)
                {
                    count = count + 1;
                }

                else
                {
                    if (count > maxx)
                    {
                        maxx = count;
                        count = 0;
                    }
                }
            }
        }

        if (count < maxx)
        {

            cout << maxx << " ";
            return maxx;
        }
        else
        {
            cout << count << " ";
            return count;
        }

        //return maxx;
        // if (nums.size() <= 1)
        // {
        //     return maxx;
        // }
        // else
        // {
        //     return maxx + 1;
        // }
    }
};

int main()

{
    Solution s;
    //s.longestConsecutive({1});
    //s.longestConsecutive({1, 4, 6});
    s.longestConsecutive({1,2,0,1});
    //s.longestConsecutive({0, 3, 7, 2, 5, 8, 4, 6, 0, 1});

    return 0;
}