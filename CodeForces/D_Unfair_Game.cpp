#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        ll full_cycles = n / (2 * k);
        ll remainder = n % (2 * k);
        ll result = full_cycles * k + min(remainder, k);
        cout << result << endl;
        
    }

    return 0;
}
