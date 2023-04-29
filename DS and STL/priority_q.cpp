#include <bits/stdc++.h>
using namespace std;

class CustomComparator
{
public:
    bool operator()(int a, int b)
    {
        return a > b;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int arr[] = {52, 46, 102, 98, 132, 29, 45};
    int n = sizeof(arr) / sizeof(int);

    // Priority Queue or Heap
    // Which is default a Max heap

    priority_queue<int> maxHeap;

    for (int x : arr)
    {
        maxHeap.push(x);
    }

    while (!maxHeap.empty())
    {
        cout << maxHeap.top() << endl;
        maxHeap.pop();
    }

    // To create a min heap, greater<int> is default comparator

    cout << "Custom Comparator" << endl;
    priority_queue<int, vector<int>, CustomComparator> minHeap;

    for (int x : arr)
    {
        minHeap.push(x);
    }

    while (!minHeap.empty())
    {
        cout << minHeap.top() << endl;
        minHeap.pop();
    }

    return 0;
}