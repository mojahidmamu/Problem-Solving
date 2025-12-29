#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int A[n], B[m];
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        sum1 += A[i];
    }
    //
    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
        sum2 += B[i];
    }

    if (sum1 == sum2)
    {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    

    return 0;
}
