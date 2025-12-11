#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;

    int firstDigit = n / 10;
    int lastDigit = n % 10;
    if (firstDigit % lastDigit == 0 || lastDigit % firstDigit == 0)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }

    return 0;
}
