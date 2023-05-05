#include <bits/stdc++.h>
using namespace std;

int powr(int a, int b)
{
    int res = 1;

    while (b)
    {
        if (b & 1)
        {
            res *= a;
        }
        a *= a;
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

    int a, b;

    cin >> a >> b;

    cout << powr(a, b) << endl;

    return 0;
}