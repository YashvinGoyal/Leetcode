#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;
class Solution
{
public:
    // string minWindow(string s, string t)
    // {
    //     int min_len = 100;
    //     vector<char> vec;
    //     // vec.push_back(s[0]);
    //     map<char, int> map1, map2;
    //     map<int, string> map_res;
    //     for (int j = 0; j < t.size(); j++)
    //     {
    //         map2[t[j]]++;
    //     }
    //     int count = 0;
    //     if (s.size() < t.size())
    //     {
    //         cout << " ";
    //     }
    //     else if (s.size() == t.size() == 1)
    //     {
    //         cout << s;
    //     }

    //     else
    //     {
    //         for (int i = 0; i < s.size(); i++)
    //         {
    //             if (vec.size() < t.size())
    //             {
    //                 vec.push_back(s[i]);
    //                 map1[s[i]]++;
    //             }
    //             else
    //             {

    //                 for (int j = 0; j < t.size(); j++)
    //                 {
    //                     if (map1[t[j]] >= map2[t[j]])
    //                     {
    //                         count = count + 1;
    //                     }
    //                 }
    //                 cout << count << endl;

    //                 if (count == t.size())
    //                 {
    //                     int a = vec.size();

    //                     for (int r = 0; r < vec.size(); r++)
    //                     {
    //                         map_res[a].push_back(vec[r]);
    //                     }

    //                     min_len = min(a, min_len);
    //                     map1[vec[0]] = map1[vec[0]] - 1;
    //                     auto fir = vec.begin();
    //                     vec.erase(fir);
    //                 }
    //                 count = 0;
    //                 vec.push_back(s[i]);
    //                 map1[s[i]]++;
    //             }
    //         }
    //     }
    // }

    string minWindow(string s, string t)
    {
        string res;
        map<char, int> map1, map2;
        map<int,string>map_res;
        int min_len = 100;
        for (int i = 0; i < t.size(); i++)
        {
            map2[t[i]]++;
        }
        int need = map2.size();
        int count = 0;
        if (s.size() < t.size())
        {
            cout << " ";
        }
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                res.push_back(s[i]);
                map1[s[i]]++;

                if (map1[s[i]] == map2[s[i]])
                {
                    count = count + 1;
                }

                while (count == need)
                {
                    int a = res.size();
                    min_len = min(a, min_len);
                    map_res[min_len]=res;
                    map1[res[0]] = map1[res[0]] - 1;
                    if (map2[res[0]] > 0 && map1[res[0]] < map2[res[0]])
                    {

                        count = count - 1;
                    }
                    auto fir = res.begin();
                    res.erase(fir);
                }
            }
            cout << map_res[min_len];
        }
    }
};

int main()
{
    Solution s1;
    // s1.minWindow("ADOBECODEBANC", "ABC");
    // s1.minWindow("a", "a");
    s1.minWindow("cabwefgewcwaefgcf","cae");

    return 0;
}