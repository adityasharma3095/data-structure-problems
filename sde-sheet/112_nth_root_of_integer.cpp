#include <bits/stdc++.h>
using namespace std;

int power(int a, int b)
{

    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

void nthRoot(int a, int b)
{
    int l = 0;
    int r = a;

    int ans = 0;

    while (l < r)
    {
        int mid = (l + r) / 2;

        if (power(mid, b) == a)
        {
            ans = mid;
            break;
        }

        else if (power(mid, b) < a)
        {
            l = mid;
        }

        else
        {
            r = mid;
        }
    }

    cout << ans << endl;
}

int main()
{

    int a = 81;
    int b = 4;

    // 3^4 == 81
    nthRoot(a, b);
    return 0;
}