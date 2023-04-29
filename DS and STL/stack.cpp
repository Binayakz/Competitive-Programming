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
    // Important Stack methods

    /*

     */

    stack<string> books;

    books.push("C");
    books.push("C++");
    books.push("Java");
    books.push("Python");
    books.push("Swift");

    while (!books.empty())
    {
        cout << "At Top: " << books.top() << endl;
        books.pop();
    }

    return 0;
}