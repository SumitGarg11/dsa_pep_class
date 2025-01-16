#include <bits/stdc++.h>
using namespace std;
int main()
{
    // find the max, min, second max , and second min
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int maxi = arr[0];
    int mini = arr[0];
    int secondMax = -1;
    int secondMin = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini)
            mini = arr[i];
        if (arr[i] > maxi)
            maxi = arr[i];
    }
    cout << "Maxi is" << maxi << endl;
    cout << "Mini is" << mini << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != maxi && (arr[i] < maxi && arr[i] > secondMax))
        {
            secondMax = arr[i];
        }
        if (arr[i] != mini && (arr[i] > mini && arr[i] < secondMin))
        {
            secondMin = arr[i];
        }
    }
    cout << "Second Max " << secondMax << endl;
    cout << "Second Mix " << secondMin << endl;
}