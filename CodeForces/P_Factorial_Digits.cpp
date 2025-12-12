#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;
    int fact = 1;
    for (int i = 2; i <= n; ++i)
    {
        fact *= i;
    }
    string fact_str = to_string(fact);
    int sum_of_digits = 0;
    for (char c : fact_str)
    {
        sum_of_digits += c - '0';
    }
    cout << sum_of_digits << "\n";
    // --- your code here ---
    return 0;
}
