#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int a, b, c;
    cin >> a >> b >> c;
    int original[3] = {a, b, c};
    sort(original, original + 3);
    for (int x : original)
    {
        cout << x << endl;
    }
    cout << endl; 
    
    cout << a << endl
         << b << endl
         << c << endl;
    return 0;
}