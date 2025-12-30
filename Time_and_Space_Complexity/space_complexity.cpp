#include <bits/stdc++.h>
using namespace std;

int main()
{

    // example 01
    // int a = 5;
    // int b = 10;
    // int sum = a + b; // O(1) -> space complexity

    // example 02
    int n;
    cin >> n;
    int a[n]; // O(n) -> space complexity
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // example 03 - 2D array
    int n;
    cin >> n;
    int matrix[n][n]; //  Space complexity = O(n²)

    return 0;
}