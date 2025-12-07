#include <bits/stdc++.h>
using namespace std;

bool wonderful_number(long long n)
{
    // A number is wonderful if this number is odd and its binary representation is palindrome.
    if (n % 2 == 0)
    {
        return false;
    }
    string binary_representation = "";
    while (n > 0)
    {
        binary_representation += (n % 2 == 0) ? '0' : '1';
        n /= 2;
    }
    string reversed_representation = binary_representation;
    reverse(reversed_representation.begin(), reversed_representation.end());
    return binary_representation == reversed_representation;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    long long n;
    cin >> n;
    if (wonderful_number(n))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
