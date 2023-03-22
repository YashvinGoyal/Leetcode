#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
    // int characterReplacement(string s, int k)
    // {
    //     vector<char> vec;
    //     int i = 0;
    //     // vec.push_back(s[0]);
    //     int max_len = 0;
    //     int count = 0;
    //     for (int i = 0; i < s.size(); i++)
    //     {
    //         char serach = s[i];
    //         auto it = find(vec.begin(), vec.end(), serach);

    //         if (it == vec.begin())
    //         {
    //             vec.push_back(s[i]);
    //         }

    //         else
    //         {
    //             if (i < k)
    //             {
    //                 // char temp = vec[0];
    //                 vec.push_back(s[i]);
    //                 i++;
    //             }
    //             else
    //             {
    //                 auto fir = vec.begin();
    //                 vec.erase(fir);

    //                 for (int j = 0; j < vec.size(); j++)
    //                 {
    //                     if (vec[0] == vec[i])
    //                     {
    //                         count++;
    //                     }
    //                 }
    //                 if (count == vec.size())
    //                 {
    //                     i = 0;
    //                 }
    //                 else
    //                 {
    //                     i = k - (vec.size() - count);
    //                 }
    //             }
    //         }
    //     }
    // }

    int characterReplacement(string s, int k)
    {
        vector<char> vec;
        map<char, int> mapp;
        int max_len = 0;
        // vec.push_back(s[0]);
        for (int i = 0; i < s.size(); i++)
        {

            vec.push_back(s[i]);
            mapp[s[i]]++;

            int max_occ = 0;

            for (auto k : mapp)
            {
                if (k.second > max_occ)
                {
                    max_occ = k.second;
                }
            }
            // cout << max_occ << endl;
            // cout<<vec.size();
            // cout << vec.size() - max_occ << endl;
            while (vec.size() - max_occ > k)
            {

                mapp[vec[0]] = mapp[vec[0]] - 1;
                auto fir = vec.begin();
                vec.erase(fir);
                int max_occ = 0;
                for (auto k : mapp)
                {
                    if (k.second > max_occ)
                    {
                        max_occ = k.second;
                    }
                }
            }
            int a = vec.size();
            max_len = max(a, max_len);
        }

        cout << max_len;
    }
};
int main()
{
    Solution s1;
    s1.characterReplacement("ABAB", 2);
    s1.characterReplacement("AABABBA", 1);
    s1.characterReplacement("AAAA", 0);

    return 0;
}
