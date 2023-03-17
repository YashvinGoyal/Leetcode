#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution
{
public:
    // vector<int> productExceptSelf(vector<int> nums)
    // {
    //     vector<int> vec;
    //     int prod = 1;
    //     for (int i = 0; i < nums.size(); i++)
    //     {
    //         for (int j = 0; j < nums.size(); j++)
    //         {
    //             if (i != j)
    //             {
    //                 prod = prod * nums[j];
    //             }
    //         }
    //         vec.push_back(prod);
    //         prod = 1;
    //     }

    //     for(int i=0;i<vec.size();i++){
    //         cout<<vec[i]<<" ";
    //     }
    // }
    vector<int> productExceptSelf(vector<int> nums)
    {
        vector<int> postfix;
        vector<int> prefix;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i == 0)
            {
                prefix.push_back(1);
            }

            else
            {
                prefix.push_back(nums[i - 1] * prefix[i - 1]);
            }
        }
        for (int j = nums.size() - 1; j >= 0; j--)
        {
            if (j == nums.size() - 1)
            {
                postfix.push_back(1);
            }
            else
            {
                postfix.push_back(nums[j + 1] * postfix[nums.size() - (j + 2)]);
            }
        }

        // for (int i = 0; i < nums.size(); i++)
        // {
        //     cout << prefix[i] << " ";
        // }
        // for (int i = 0; i < nums.size(); i++)
        // {
        //     cout << postfix[i] << " ";
        // }
        for (int i = 0; i < nums.size(); i++)
        {
            cout << prefix[i] * postfix[nums.size() - (i + 1)] << " ";
        }
    }
};

int main()
{
    Solution s;
    s.productExceptSelf({1, 2, 3, 4});
    cout<<endl;
    s.productExceptSelf({-1,1,0,-3,3});
    return 0;
}
