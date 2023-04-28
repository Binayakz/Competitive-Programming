#include <bits/stdc++.h>
using namespace std;

int calculation(vector<long long int> &arr, long long int n)
{
    long long int q = n / 5;
    long long int r = n % 5;

    if (r == 0)
    {
        r = 5;
        q = q - 1;
    }
    arr.push_back((r * 2 - 1));

    if (q == 0)
    {
        return 0;
    }

    else if (q > 0 && q < 5)
    {
        arr.push_back((q * 2 - 1));
        return 0;
    }
    calculation(arr, q);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    long long int n;
    cin >> n;
    long long int result = 0;
    vector<long long int> arr;

    calculation(arr, n);

    for (size_t i = 0; i < arr.size(); i++)
    {
        result = result + (pow(10, i) * arr[i]);
    }

    cout << result << endl;

    return 0;
}

// Problem Link
// https://practice.geeksforgeeks.org/problems/35bff0ee40090b092e97b02f649085bf1390cc67/1