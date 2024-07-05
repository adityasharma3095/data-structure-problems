#include <bits/stdc++.h>
using namespace std;

void repeat(int arr[], int n)
{

    unordered_map<int, bool> m;

    for (int i = 0; i < n; i++)
    {
        if (m.find(arr[i]) == m.end())
            m[arr[i]] = true;
        else
            cout << "Repeating number is " << arr[i] << endl;
    }

    for (int i = 1; i < n; i++)
    {
        if (m.find(i) == m.end())
            cout << "Missing element is " << i << endl;
    }
}