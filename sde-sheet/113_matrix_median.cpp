#include <bits/stdc++.h>
using namespace std;
const int MAX = 100;

int binaryMedian(int m[][MAX], int r, int c)
{
    return 0;
}

int main()
{
    int r = 3, c = 3;
    int m[][MAX] = {{1, 3, 5},
                    {2, 6, 9},
                    {3, 6, 9}};

    int place = 0;
    int mid = 4;
    for (int i = 0; i < r; ++i)
    {
        cout << place << " " << upper_bound(m[i], m[i] + c, mid) << " " << m[i] << endl;
        place += upper_bound(m[i], m[i] + c, mid) - m[i];
    }

    cout << "Median is " << binaryMedian(m, r, c) << endl;
    return 0;
}