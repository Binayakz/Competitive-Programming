#include <bits/stdc++.h>
using namespace std;

int multiply(int a, int b, int c)
{
    int res = 0;

    while (b)
    {
        if (b & 1)
            res = res + a, res %= c;
        a += a, a %= c;
        b /= 2;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a, b, c;
    // cin >> a >> b >> c;

    cout << multiply(1e9, 1e9, 1e8 + 2);
    return 0;
}