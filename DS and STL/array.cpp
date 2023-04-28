#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void updateClassicArray(int classicArray[], int i, int val)
{
    classicArray[i] = val;
}

void updateSTLArray(array<int, 4> &stlArray, int i, int val)
{
    stlArray[i] = val;
}

void printClassicArray(int classicArray[], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        cout << classicArray[i] << " ";
    }
    cout << endl;
}

void printSTlArrayarray(const array<int, 4> &stlArray)
{
    for (size_t i = 0; i < stlArray.size(); i++)
    {
        cout << stlArray[i] << " ";
    }
    cout << endl;
}

void inputClassicArray(int classicArray[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> classicArray[i];
    }
}

void inputSTLArray(array<int, 4> &stlArray)
{
    for (int i = 0; i < stlArray.size(); i++)
    {
        cin >> stlArray[i];
    }
}

void sortClassicArray(int classicArray[], int n)
{
    sort(classicArray, classicArray + n);
}

void sortSTLArray(array<int, 4> &stlArray)
{
    sort(stlArray.begin(), stlArray.end());
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int classicArray[n];
    array<int, 4> stlArray;

    cout << "Classic Array Example" << endl;

    inputClassicArray(classicArray, n);
    printClassicArray(classicArray, n);

    int idx, val;
    cin >> idx;
    cin >> val;

    updateClassicArray(classicArray, idx, val);
    printClassicArray(classicArray, n);

    sortClassicArray(classicArray, n);
    printClassicArray(classicArray, n);

    cout << "STL Array Example" << endl;

    inputSTLArray(stlArray);
    printSTlArrayarray(stlArray);

    cin >> idx;
    cin >> val;

    updateSTLArray(stlArray, idx, val);
    printSTlArrayarray(stlArray);

    sortSTLArray(stlArray);
    printSTlArrayarray(stlArray);

    // initialize an array with all fives
    array<int, 10> arrayOfFive;
    arrayOfFive.fill(5);
    for (size_t i = 0; i < arrayOfFive.size(); i++)
    {
        cout << arrayOfFive[i] << " ";
    }
    cout << endl;
    for (auto x : arrayOfFive)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
