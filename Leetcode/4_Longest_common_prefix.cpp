//https://leetcode.com/problems/longest-common-prefix/description/?envType=problem-list-v2&envId=array
#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> strs)
{
    string ans = strs[0];

    for (int i = 1; i < strs.size(); i++)
    {
        int j = 0;

        while (j < ans.length() &&
               j < strs[i].length() &&
               ans[j] == strs[i][j]) // i indecate string serial, j indecate string charcter position
        {
            j++;
        }

        ans = ans.substr(0, j);

        if (ans == "")
        {
            return "";
        }
    }

    return ans;
}

int main()
{
    vector<string> strs = {"flower", "flow", "flight"};

    string result = longestCommonPrefix(strs);

    cout << "Longest Common Prefix: " << result << endl;

    return 0;
}
