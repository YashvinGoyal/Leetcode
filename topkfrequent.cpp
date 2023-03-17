// #include <iostream>
// #include <vector>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, k, *arr;
//     cout << "enter the number of elements of array " << endl;
//     cin >> n;
//     arr = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         cout << "enter the elements = ";
//         cin >> arr[i];
//     }
//     int count = 0;
//     cout << "enter the value of k " << endl;
//     cin >> k;
//     int c = 0;
//     vector<int> vec;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count = count + 1;
//             }
//         }

//         // cout<<count<<" "<<arr[i]<<endl;
//         if (count >= k)
//         {
//             vec.push_back(arr[i]);
//         }
//         count = 0;
//     }
//     for (int i = 0; i < vec.size(); i++)
//     {
//         if (vec[i] == vec[i + 1])
//         {
//             vec.pop_back(vec[i + 1])
//         }
//     }
//     // cout<<"Highest frequency element = "<<k;

//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <set>
using namespace std;
class Solution
{
public:
    // vector<int> topKFrequent(vector<int> nums, int k)
    // {
    //     int count = 0;
    //     set<int> sett;
    //     for (int i = 0; i < nums.size(); i++)
    //     {
    //         for (int j = 0; j < nums.size(); j++)
    //         {
    //             if (nums[i] == nums[j])
    //             {
    //                 count = count + 1;
    //             }
    //         }
    //         if (count >= k)
    //         {
    //             sett.insert(nums[i]);
    //         }
    //         count=0;
    //     }

    //     for (auto i : sett)
    //     {
    //         cout << i << ' ';
    //     }
    // }
    vector<int> topKFrequent(vector<int> nums, int k)
    {
        map<int, int> mapp;
        map<int, int>::iterator itr;
        for (int i = 0; i < nums.size(); i++)
        {
            // if (mapp.find(nums[i]) == mapp.end())
            // {
            //     mapp[nums[i]] = 1;
            // }
            // else
            // {
                mapp[nums[i]]++;
            // }
        }
        vector<int>vec;
        for (itr = mapp.begin(); itr != mapp.end(); itr++)
        {
            if (itr->second >= k)
            {
                vec.push_back(itr->first);
                cout << itr->first << " ";
            }
        }

    }
};
int main()
{
    Solution s;
    s.topKFrequent({-1,-1}, 1);
}