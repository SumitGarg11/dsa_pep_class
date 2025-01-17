#include <bits/stdc++.h>
using namespace std;
int sumFun(int n)
{
    int sum = 0;
    if (n < 0)
    {
        return 0;
    }
    int remSum = sumFun(n - 1);
    int tSum = n + remSum;

    return tSum;
}
int main()
{
    int n = 5;
    int ans = sumFun(5);
    cout << ans;
}