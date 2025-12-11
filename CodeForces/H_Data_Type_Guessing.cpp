#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    long long n, k, a;
    cin >> n >> k >> a;

    if (n == 1 && k == 1)
    {
        cout << "int" << "\n";
        return 0;
    }

    if (n <= 2147483647 && k == 1)
    {
        cout << "int\n";  
    }
    else
    {
        cout << "long long\n";  
    }

    return 0;
}
