#include <bits/stdc++.h>
using namespace std;

// convert digit char to value
int charToVal(char c)
{
    if (c >= '0' && c <= '9')
        return c - '0';
    return c - 'A' + 10;
}

// convert value to digit char
char valToChar(int v)
{
    if (v < 10)
        return char(v + '0');
    return char(v - 10 + 'A');
}

int main()
{
    int T;
    cin >> T;

    if (T == 1)
    {
        // Base X --> Decimal
        string N;
        int X;
        cin >> N >> X;

        long long decimal = 0;
        for (char c : N)
        {
            int val = charToVal(c);
            decimal = decimal * X + val;
        }

        cout << decimal;
    }
    else
    {
        // Decimal --> Base X
        long long N;
        int X;
        cin >> N >> X;

        if (N == 0)
        {
            cout << 0;
            return 0;
        }

        string result = "";
        while (N > 0)
        {
            int rem = N % X;
            result += valToChar(rem);
            N /= X;
        }

        reverse(result.begin(), result.end());
        cout << result;
    }

    return 0;
}
