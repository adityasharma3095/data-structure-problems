//sort 012 without using extra space
#include <bits/stdc++.h>
using namespace std;

void func(int arr[], int n)
{
    int mid = 0;
    int low = 0;
    int high = n - 1;

    while (mid < high)
    {

        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }

        else if (arr[mid] == 1)
        {
            mid++;
        }

        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}