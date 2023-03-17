#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> nums)
    {
        sort(nums.begin(), nums.end());

        int i = 0;
        int j = nums.size() - 1;
        set<vector<int>> sett;
        vector<vector<int>> vec;
        for (int k = 0; k < nums.size(); k++)

        {
            while (i < j)
            {
                if (i != k && j != k)
                {
                    if (nums[i] + nums[j] == -nums[k])
                    {
                        // cout << nums[i] << " " << nums[j] << " " << nums[k] << endl;
                        sett.insert({nums[i], nums[j], nums[k]});
                        break;
                    }
                    else if (nums[i] + nums[j] < -nums[k])
                    {
                        i++;
                    }
                    else if (nums[i] + nums[j] > -nums[k])
                    {
                        j--;
                    }
                }
                else if (i == k)
                {
                    i++;
                }

                else if (j == k)
                {
                    j--;
                }
            }
            i = 0;
            j = nums.size() - 1;
        }

        for (auto i : sett)
        {
            vec.push_back(i);
        }

        // for (int i = 0; i < vec.size(); i++)

        // {
        //     for (int j = 0; j < vec.size(); j++)
        //     {
        //         cout << vec[i][j] << " ";
        //     }
        // }
    }
};
int main()
{
    Solution s1;
    s1.threeSum({-1, 0, 1, 2, -1, -4});
    // s1.threeSum({0,1,1});
    // s1.threeSum({0,0,0});

    return 0;
}