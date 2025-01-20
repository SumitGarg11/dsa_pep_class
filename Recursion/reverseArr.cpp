#include <bits/stdc++.h>
using namespace std;
void solve(int arr[], int n)
{
    if (n < 0)
    {
        return;
    }
    cout << arr[n] << " ";
    solve(arr, n - 1);
}
int main()
{
    // reverse the array using the recursive
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    solve(arr, 4);
}