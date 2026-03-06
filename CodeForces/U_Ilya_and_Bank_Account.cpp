#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

// Author: Abdullah all Mojahid

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        ll n;
        cin >> n;

        if (n >= 0)
        {
            cout << n << endl;
        }
        else
        {
            int removeLastDigit = n / 10;
            int removeSecondLastDigit = (n / 100) * 10 + (n % 10);
            cout << max(removeLastDigit, removeSecondLastDigit) << endl;
        }


    return 0;
}
