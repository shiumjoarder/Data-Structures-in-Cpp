#include <bits/stdc++.h>
using namespace std;

int main()  
{
    int n;
    cin >> n;

       // O(sqrt(N)) time complexity
    for (int i = 1; i <= sqrt(n); i++)
    {
        cout << i << endl;
    }
     
    // cout << endl;

    // for (int i = 1; i <=sqrt(n); i++)
    // {
    //     if(n%i == 0)
    //     {
    //          cout << i << " " << n/i << " " ;
    //     }
    // }
    
return 0;
}