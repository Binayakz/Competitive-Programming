#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Vector Methods
    /*
        [], at(), back(), begin(), capacity(), clear(),
        empty(), end(), erase(), front(), insert()
        pop_back()
        push_back()
        reserve()
        resize()
        size()
    */
    int n;
    cin >> n;
    vector<int> vt1;

    for (size_t i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        vt1.push_back(num);

        cout << "Capacity: " << vt1.capacity() << " Size: " << vt1.size() << endl;
    }
    cout << endl;

    for (auto x : vt1)
    {
        cout << x << endl;
    }

    return 0;
}