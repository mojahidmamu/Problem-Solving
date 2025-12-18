#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int R, S;
    cin >> R >> S;
    if (S * sqrt(2) <= 2 * R)
    {
        cout << "Circle\n";
    }
    else if (S >= 2 * R)
    {
        cout << "Square\n";
    }
    else
    {
        cout << "Complex\n";
    }
    return 0;
}
