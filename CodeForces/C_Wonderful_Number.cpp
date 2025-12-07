#include <bits/stdc++.h>
using namespace std;

bool isOdd(long long n)
{
    return n % 2 != 0;
}

bool isBinaryPalindrome(long long n)
{
    // A number is wonderful if this number is odd and its binary representation is palindrome.
    string binary = "";
    while (n > 0)
    {
        binary += (n % 2 == 0) ? '0' : '1';
        n /= 2;
    }
    string revBinary = binary;
    reverse(revBinary.begin(), revBinary.end());
    return binary == revBinary;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    long long n;
    cin >> n;
    if (isOdd(n) && isBinaryPalindrome(n))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
