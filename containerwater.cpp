// #include <iostream>
// #include <bits/stdc++.h>
// #include <vector>
// #include <math.h>
// using namespace std;
// class Solution
// {
// public:
//     int maxArea(vector<int> height)
//     {
//         int area;
//         int j = 0;
//         vector<int> vec;
//         set<int, greater<int>> sett;
//         for (int i = 0; i < height.size(); i++)
//         {
//             // for (int j = 0; j < height.size(); j++)
//             while (j < height.size())
//             {
//                 if (i != j)
//                 {
//                     if (height[i] <= height[j])
//                     {
//                         if (i > j)
//                         {
//                             area = (i - j) * height[i];
//                             // vec.push_back(area);
//                             // sett.insert(area);
//                         }
//                         else if (j > i)
//                         {
//                             area = (j - i) * height[i];
//                             // vec.push_back(area);
//                             // sett.insert(area);
//                         }
//                     }

//                     else if (height[i] > height[j])
//                     {
//                         if (i > j)
//                         {
//                             area = (i - j) * height[j];
//                             //     vec.push_back(area);
//                             //     sett.insert(area);
//                         }
//                         else if (j > i)
//                         {
//                             area = (j - i) * height[j];
//                             // vec.push_back(area);
//                             // sett.insert(area);
//                         }
//                     }
//                 }
//                 j++;
//             }
//             j = 0;
//         }

//         // for (int i = 0; vec.size(); i++)
//         // {
//         //     cout << vec[i] << " ";
//         // }

//         //     for (auto i:sett)
//         //     {
//         //         cout << i << " ";
//         //     }
//         // }
//     }
// };
// int main()
// {
//     Solution s;
//     s.maxArea({1, 8, 6, 2, 5, 4, 8, 3, 7});

//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <math.h>
using namespace std;
class Solution
{
public:
    int maxArea(vector<int> height)
    {
        int area;
        int i = 0;
        int j = 1;
        int maxx = 0;

        while (i < height.size())
        {

            if (j < height.size())
            {
                if (height[i] <= height[ j])
                {
                    // if (i > j)
                    // {
                    //     area = (i - j) * height[i];
                    //     if (area > maxx)
                    //     {
                    //         maxx = area;
                    //     }
                    // }
                    // else if (j > i)
                    // {
                    //     area = (j - i) * height[i];
                    //     if (area > maxx)
                    //     {
                    //         maxx = area;
                    //     }
                    // }
                    area = (j-i)* height[i];
                    if (area > maxx)
                    {
                        maxx = area;
                    }
                    j++;
                }

                else if (height[i] > height[j])
                {
                    // if (i > j)
                    // {
                    //     area = (i - j) * height[j];
                    //     if (area > maxx)
                    //     {
                    //         maxx = area;
                    //     }
                    // }
                    // else if (j > i)
                    // {
                    //     area = (j - i) * height[j];
                    //     if (area > maxx)
                    //     {
                    //         maxx = area;
                    //     }
                    // }
                    area = (j-i) * height[j];
                    if (area > maxx)
                    {
                        maxx = area;
                    }

                    j++;
                }
            }
            else
            {
                i++;
                j = i+1;
                
            }
            
            
        }
        cout << maxx;
        return maxx;
        
    }
};
int main()
{
    Solution s;
    s.maxArea({1, 8, 6, 2, 5, 4, 8, 3, 7});

    return 0;
}
