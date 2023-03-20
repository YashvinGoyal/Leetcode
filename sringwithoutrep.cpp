#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;
class Solution
{
public:
    // int lengthOfLongestSubstring(string s)
    // {
    //     string str;
    //     int max_len = 0;
    //     int count = 0;
    //     for (int i = 0; i < s.length(); i++)
    //     {
    //         for (int j = 0; j < str.length(); j++)
    //         {
    //             if (s[i] == str[j])
    //             {
    //                 count = 1;
    //                 break;
    //             }
    //         }
    //         if (count == 1)
    //         {

    //
    //             str.erase(str[0]);
    //             str.push_back(s[i]);
    //         }
    //         else
    //         {

    //             str.push_back(s[i]);
    //             int b = str.length();
    //             max_len = max(b, max_len);
    //         }
    //         count = 0;
    //     }

    //     cout << max_len;
    // }
    int lengthOfLongestSubstring(string s)
    {

        vector<char> vec;
        vec.push_back(s[0]);
        int max_len = 0;
        for (int i = 1; i < s.length(); i++)
        {
            cout << "helllo" << endl;
            char search = s[i];
            cout<<"searching :"<<search;
            auto it = find(vec.begin(),vec.end(),search);
            // if (it != vec.end())
            //  {

            while (it != vec.end())
            {
                cout<<"main while mei hun"<<endl;

                auto fir = vec.begin();
                vec.erase(fir);
                for(auto i: vec)
            cout<<"the elements of set are :"<<i<<" "<<endl;
            cout<<" searching for"<<search<<endl;
                it = find(vec.begin(),vec.end(),search);
                
            }
            vec.push_back(s[i]);
            int a = vec.size();
            max_len = max(max_len, a);
            for(auto i: vec)
            cout<<"the elements of set are (bahar):"<<i<<" "<<endl;

            //  }

            // else
            // {
            //     vec.insert(s[i]);
            //     int b=vec.size();
            //     max_len = max(max_len,b);
            // }
        }

        cout << max_len;
    }
};

int main()
{
    Solution s1;
    s1.lengthOfLongestSubstring("ynyo");
    // s1.lengthOfLongestSubstring("pwwkew");
    // s1.lengthOfLongestSubstring("aab");
    // s1.lengthOfLongestSubstring("dvdf");
    return 0;
}