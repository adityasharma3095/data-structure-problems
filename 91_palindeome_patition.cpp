#include <bits/stdc++.h>
using namespace std;

bool palin(string s, int start, int end)
{
    while (start <= end)
    {
        if (s[start++] != s[end--])
            return false;
    }
    return true;
}

void palind_pat(int ind, string s, vector<vector<string>> &ans, vector<string> ds)
{

    if (ind == s.length())
    {
        ans.push_back(ds);
        return;
    }

    for (int i = ind; i < s.length(); i++)
    {

        if (palin(s, ind, i))
        {
            ds.push_back(s.substr(ind, i - ind + 1));
            palind_pat(i + 1, s, ans, ds);
            ds.pop_back();
        }
    }
}

int main()
{
    string s = "aabb";

    vector<vector<string>> ans;
    vector<string> ds;
    palind_pat(0, s, ans, ds);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}