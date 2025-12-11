#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n, m, k;
    cin >> n >> m >> k;
    //  Print "int", "long long" or "double" (without quotes) as described in the statement.
    if (n >= -32768 && n <= 32767 && m >= -32768 && m <= 32767 && k >= -32768 && k <= 32767)
    {
        cout << "int" << "\n";
    }
    else if (n >= -2147483648 && n <= 2147483647 &&
             m >= -2147483648 && m <= 2147483647 &&
             k >= -2147483648 && k <= 2147483647)
    {
        cout << "long long" << "\n";
    }
    else
    {
        cout << "double" << "\n";
    }

    return 0;
}
