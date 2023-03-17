// #include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the size of array" << endl;
//     cin >> n;
//     string str[n];
//     cout << "enter the elements of str" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> str[i];
//     }

//     vector<string> strr;
//     for (int i = 0; i < n; i++)
//     {
//         strr.push_back(str[i]);
//     }

//     // for (int i=0; i<n; i++)
//     // {

//     //     cout << strr[i] <<endl;
//     // }
//     int count = 0;
//     // cout << strr[0].at(0);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (strr[i].length() == strr[j].length())
//             {
//                 for (int z = 0; z < strr[i].length(); z++)
//                 {
//                     for (int k = 0; k < strr[i].length(); k++)
//                     {
//                         if (strr[i].at(z) == strr[j].at(k))
//                         {
//                             count = count + 1;
//                         }
//                     }
//                 }
//                 if (count == strr[i].length())
//                 {
//                     cout << strr[i] << " " << strr[j] << endl;
//                 }
//                 // else{
//                 //     cout<<strr[i]<<endl;
//                 // }
//                 count = 0;
//             }
//         }
//     }
// }
#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> strs)
    {   vector<string>vec;
        map<string, string> mapp;
        map<string, string>::iterator itr;
        for (int i = 0; i < strs.size(); i++)
        {
            string ss, ss_sort;
            ss = strs[i];
            // cout<<ss;
            sort(strs[i].begin(), strs[i].end());
            // cout<<strs[i];
            // mapp.insert(pair<string, string>(strs[i], ss));
            mapp[strs[i]].append(ss + " ");
        }
        for (itr = mapp.begin(); itr != mapp.end(); itr++)
        {
            //cout << '\t' << itr->first << " " << itr->second << endl;
            vec.push_back(itr->second);
        }
        
        for(int i=0;i<vec.size();i++){
            cout<<"["<<vec[i]<<"]";
        }
    }
};

int main()
{
    Solution s;
    s.groupAnagrams({"eat", "tea", "tan", "ate", "nat", "bat"});

    return 0;
}
