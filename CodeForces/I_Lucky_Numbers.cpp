#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;
    //   A number of two digits is lucky if one of its digits is divisible by the other.
    bool is_lucky = true;

    int firstDigit = n / 10;
    int lastDigit = n % 10;
    if (firstDigit % lastDigit == 0 || lastDigit % firstDigit == 0)
    {
        is_lucky = true;
    }
    else
    {
        is_lucky = false;
    }

    if (is_lucky == true)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }

    return 0;
}
