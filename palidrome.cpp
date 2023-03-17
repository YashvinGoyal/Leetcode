#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
class Solution
{
public:
    bool isPalindrome(string s)
    {
        string slow;
        // slow = tolower(s);
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ' || s[i] == ',' || s[i] == ':' || s[i] == '.' || s[i] == '!' || s[i] == '@' || s[i] == '#' || s[i] == '$' || s[i] == '%' || s[i] == '?')
            {
                s.erase(i, 1);
                i--; // without this some letters would miss.
            }
        }
        int count = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == s[s.length() - 1 - i])
            {
                count = count + 1;
            }
        }
        if (count == s.length())
        {
            
            return true;
            
        }
        else
        {
            
            return false;
        }
    }
};

int main()
{
    Solution s1;
   // s1.isPalindrome("A man, a plan, a canal: Panama");
    s1.isPalindrome("race a car");

    return 0;
}
