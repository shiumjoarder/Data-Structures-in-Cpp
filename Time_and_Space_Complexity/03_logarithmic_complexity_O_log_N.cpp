#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // O(logN) time complexity

    // example 01
    
    for (int i = 1; i < n; i *= 2)
    {
        cout << i << endl;
    }

    cout << endl;

    // example 02

    for (int i = n; i >= 1; i /= 3)
    {
        cout << i << endl;
    }

    cout << endl;

    // example 03

    int k = 2;
    for (int i = 1; i < n; i++)
    {
        cout << i << endl;
        i = i * k;
    }

    return 0;
}