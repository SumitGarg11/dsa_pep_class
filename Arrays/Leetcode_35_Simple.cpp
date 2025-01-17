#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 3, 5, 7};
    int target = 6;
    int n = 4;
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return mid; // Target found, return its index.
        }
        else if (arr[mid] > target)
        {
            high = mid - 1; // Narrow search to the left half.
        }
        else
        {
            low = mid + 1; // Narrow search to the right half.
        }
    }

    // Return the position where the target can be inserted.
    return low;
}
