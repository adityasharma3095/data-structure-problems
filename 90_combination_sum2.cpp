#include <bits/stdc++.h>
using namespace std;

void comb_sum2(int ind, int arr[], int n, int sum, vector<vector<int>> &ans, vector<int> &ds)
{
    cout << "." << endl;
    if (sum == 0)
    {
        ans.push_back(ds);
        return;
    }

    for (int i = ind; i < n; i++)
    {

        if (i > ind and arr[i] == arr[i - 1])
            continue;

        if (arr[i] > sum)
            break;

        ds.push_back(arr[i]);
        comb_sum2(i + 1, arr, n, sum - arr[i], ans, ds);

        ds.pop_back();
    }
}

int main()
{

    int arr[] = {10, 1, 2, 7, 6, 1, 5};
    int n = 7;
    int sum = 8;

    sort(arr, arr + n);
    // erase the duplicate element
    // do not need to remove the unique elements
    // then

    vector<vector<int>> ans;
    vector<int> ds;

    comb_sum2(0, arr, n, sum, ans, ds);

    cout << "The elements printed are :" << endl;

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