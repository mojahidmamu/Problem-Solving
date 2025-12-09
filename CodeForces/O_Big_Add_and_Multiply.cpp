#include <bits/stdc++.h>
using namespace std;

// add big integer (string) + 9999
string add9999(string n)
{
    int carry = 9999;
    for (int i = n.size() - 1; i >= 0 && carry > 0; i--)
    {
        int digit = n[i] - '0';
        int sum = digit + carry;
        n[i] = (sum % 10) + '0';
        carry = sum / 10;
    }
    while (carry > 0)
    {
        n.insert(n.begin(), (carry % 10) + '0');
        carry /= 10;
    }
    return n;
}

// multiply big integer (string) * 9999
string multiply9999(string n)
{
    int carry = 0;
    for (int i = n.size() - 1; i >= 0; i--)
    {
        int digit = n[i] - '0';
        long long prod = 1LL * digit * 9999 + carry;
        n[i] = (prod % 10) + '0';
        carry = prod / 10;
    }
    while (carry > 0)
    {
        n.insert(n.begin(), (carry % 10) + '0');
        carry /= 10;
    }
    return n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string N;
    cin >> N;

    cout << add9999(N) << "\n";
    cout << multiply9999(N) << "\n";

    return 0;
}
