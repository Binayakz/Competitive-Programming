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
    // Important Deque Methods (Doubly Ended Queue)
    /*
        pop_back(), pop_front(), push_back(), push_front()
     */
    // Some ways to Initialize a deque

    deque<int> firstDeque;
    deque<int> secondDeque(4, 100);                                // 4 is size, 100 is the fill value
    deque<int> thirdDeque(secondDeque.begin(), secondDeque.end()); // iteration of deque
    deque<int> fourthDeque(thirdDeque);                            // Copying a deque

    int arrayOfIntegers[] = {1, 2, 3, 4};
    int n = sizeof(arrayOfIntegers) / sizeof(int);
    deque<int> fifthDeque(arrayOfIntegers, arrayOfIntegers + n);

    firstDeque.push_front(44);
    firstDeque.push_back(45);
    firstDeque.push_front(43);
    firstDeque.push_back(46);
    firstDeque.push_front(42);

    for (auto x : firstDeque)
    {
        cout << x << " ";
    }
    cout << endl;

    deque<int> dq(10);

    for (size_t i = 0; i < 10; i++)
    {
        dq[i] = i * i;
    }

    for (auto x : dq)
    {
        cout << x << " ";
    }

    return 0;
}