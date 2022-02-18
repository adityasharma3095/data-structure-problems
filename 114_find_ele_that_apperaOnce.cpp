#include <bits/stdc++.h>
using namespace std;

void search(int arr[], int low, int high)
{
    cout << ".";

    if (low > high)
        return;
    if (low == high)
    {
        cout << arr[low] << endl;
        return;
    }

    int mid = (low + high) / 2;

    // if mid is even and next element is same
    if (mid % 2 == 0)
    {
        if (arr[mid] == arr[mid + 1])
            search(arr, mid + 2, high);
        else
            search(arr, low, mid);
    }

    else
    {
        // if mid is odd and prev element is same
        if (arr[mid] == arr[mid - 1])
            search(arr, mid + 1, high);
        // else case
        else
            search(arr, low, mid - 1);
    }
}

int main()
{

    int arr[] = {1, 1, 3, 3, 4, 5, 5, 7, 7, 8, 8};
    int n = 11;

    search(arr, 0, 10);

    return 0;
}