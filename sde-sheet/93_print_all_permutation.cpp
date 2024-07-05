#include <bits/stdc++.h>
using namespace std;
#define int long long

void permut(string s, int l, int r)
{
    if (l == r)
        cout << s << endl;
    else
    {
        for (int i = l; i <= r; i++)
        {

            swap(s[l], s[i]);
            permut(s, l + 1, r);
            swap(s[i], s[l]);
        }
    }
}

signed main()
{

    string s = "abcdf";
    int n = s.size();
    permut(s, 0, n - 1);
    return 0;
}