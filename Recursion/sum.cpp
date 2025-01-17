#include <bits/stdc++.h>
using namespace std;
int sumFun(int n)
{
    int sum = 0;
    if (n < 0)
    {
        return 0;
    }
    sum = n + sumFun(n - 1);
    return sum;
}
int main()
{
    int n = 5;
    int ans = sumFun(5);
    cout << ans;
}