#include <bits/stdc++.h>
using namespace std;
void solve(int arr[], int l, int r)
{
    if (l >= r)
    {
        return;
    }
    swap(arr[l], arr[r]);
    solve(arr, l + 1, r - 1);
}

void solve2(int &a, int &b)
{
    swap(a, b);
}

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
    solve(arr, 0, 4);
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    cout << endl;
    int a = 10;
    int b = 20;
    solve2(a, b);
    cout << a << " " << b;
}