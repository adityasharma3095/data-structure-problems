#include <bits/stdc++.h>
using namespace std;

void comb_sum(int ind, int arr[], int n, int sum, vector<vector<int>> &ans, vector<int> &ds)
{

    if (sum == 0)
    {
        ans.push_back(ds);
        return;
    }

    while (ind < n and sum - arr[ind] >= 0)
    {

        ds.push_back(arr[ind]);
        comb_sum(ind, arr, n, sum - arr[ind], ans, ds);
        ind++;

        ds.pop_back();
    }
}

int main()
{

    int arr[] = {2, 3, 6, 7};
    int n = 4;
    int sum = 7;

    sort(arr, arr + n);
    // erase the duplicate element
    // then

    vector<vector<int>> ans;
    vector<int> ds;

    comb_sum(0, arr, n, sum, ans, ds);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}