#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1; // base case
    }
    
    return n * factorial(n - 1); // recursive call
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}
