#include <bits/stdc++.h>
#define int long long int
using namespace std;

const int mod = 1e9 + 7;

int32_t powr(int a, int b)
{
    int res = 1;

    while (b)
    {
        if (b & 1)
        {
            res *= a;
            res %= mod;
        }
        a *= a;
        a %= mod;
        b /= 2;
    }

    return res;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, b;

    cin >> a >> b;
    cout << powr(a, b) << endl;

    return 0;
}