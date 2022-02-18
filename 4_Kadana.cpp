#include <bits/stdc++.h>
using namespace std;

void kadana(int a[], int n)
{
    //max sum contiguous subarray

    int max_here = 0;
    int max_sofar = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        max_here = max_here + a[i];

        if (max_here > max_sofar)
            max_sofar = max_here;
        if (max_here < 0)
            max_here = 0;
    }

    cout << max_sofar << endl;
}