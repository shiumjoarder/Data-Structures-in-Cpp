#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    // O(N*N) time complexity

    // Example 01

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Hello" << endl;
        }
    }

    cout << endl;

    // Example 02

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Hello" << endl;
        }
    }

    return 0;
}