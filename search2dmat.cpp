#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> matrix, int target)
    {
        int a = matrix[0].size() - 1;
        int c;
        for (int i = 0; i < matrix.size(); i++)
        {
            if (matrix[i][0] <= target && matrix[i][a] >= target)
            {

                auto fir = matrix[i].begin();
                auto las = matrix[i].end();
                c = binary_search(fir, las, target);
                break;
            }
        }

        if (c == 1)
        {
            cout << "true";
        }

        else
        {
            cout << "false";
        }
    }
};
int main()
{

    Solution s1;
    // s1.searchMatrix({{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}}, 7);
    s1.searchMatrix({{1}},0);
    return 0;
}