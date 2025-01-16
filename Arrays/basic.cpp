#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
    cout << arr << endl; // this is the reference address
    cout << arr + 1 << " " << arr + 2 << " " << arr + 3 << endl;
    int *arr2 = new int[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < 4; i++)
    {

        cout << "Element : " << arr2[i] << " " << endl;
    }
    cout << sizeof(arr) / sizeof(arr[0]) << endl;
}
