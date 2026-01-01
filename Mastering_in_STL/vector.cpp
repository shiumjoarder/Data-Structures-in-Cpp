#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // (Declaration)
    vector<int> v;        // empty vector
    vector<int> v2(5, 2); // size 5, all elements = 10
    vector<int> v3 = {1, 2, 3, 4, 5};

    // Insert at end
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << "After Push back: ";
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    // Insert at specific position
    v.insert(v.begin() + 1, 15); // index 1 e 15 insert

    // Acess
    cout << "First : " << v.front() << endl;
    cout << "Last: " << v.back() << endl;
    cout << "At index 2: " << v[2] << endl;
    cout << "At index 2 (safe): " << v.at(2) << endl;

    // Size & Capacity
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Empty: " << v.empty() << endl;

    // example

    // vector<int> v;
    v.push_back(1);
    v.push_back(2);
    // size = 2, capacity = 2 (বা বেশি)

    v.push_back(3);
    // size = 3, capacity = 4 (automatically বেড়ে গেছে)

    // delete
    // v.pop_back();           // last element delete
    // v.erase(v.begin() + 1); // index 1 remove
    // v.clear();              // all elements remove

    // Iterate
    //  Method 1: Range-based for loop
    for (int x : v)
    {
        cout << x << " ";
    }

    // Method 2: Index based
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    // Method 3: Iterator
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}