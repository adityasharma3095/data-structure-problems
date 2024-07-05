#include <bits/stdc++.h>
using namespace std;
int n = 6;

void subset_sum2(int ind, int arr[], vector<vector<int>> &ans, vector<int> &ds)
{

    ans.push_back(ds);
    for (int i = 0; i < n; i++)
    {
        // condition for skipping
        // only skip if it is not the first occurance
        if (i != ind and arr[i] == arr[i - 1])
            continue;
        ds.push_back(arr[i]);
        subset_sum2(i + 1, arr, ans, ds);
        ds.pop_back();
    }
}

int main()
{
    int arr[] = {1, 2, 2, 2, 3, 3};
    // int n = 6;

    // already sorted
    vector<vector<int>> ans;
    vector<int> ds;
    subset_sum2(0, arr, ans, ds);

    for (int i = 0; i < ans.size(); i++)
    {
        for (auto it : ans[i])
        {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}