#include <bits/stdc++.h>
using namespace std;
void solve(int i, int n)
{
    if (i > n)
        return;

    solve(i + 1, n);
    cout << i << endl;
    return;
}
int main()
{
    solve(1, 5);
}