#include <bits/stdc++.h>
using namespace std;

// void merge_sort(int b[], int a[], int n, int m)
// {

//     map<int, bool> mp;

//     for (int i = 0; i < n; i++)
//         mp[a[i]] = true;

//     for (int i = 0; i < m; i++)
//     {
//         mp[b[i]] = true;
//     }

//     for (auto it : mp)
//         cout << mp.first << endl;
// }

void sort_0_one_space(int a[], int b[], int n, int m)
{
    int i, j = 0;
    int k = n - 1;

    while (i <= k and j < m)
    {

        if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            swap(b[j], a[k]);
            k--;
            j++;
        }
    }

    sort(a, a + n);
    sort(b, b + m);
}

// int main()
// {
//     int arr[3] = {1, 2, 3};

//     int i = 2;
//     cout << i-- << " " << i << endl;
//     cout << --i << " " << i << endl;
//     return 0;
// }
