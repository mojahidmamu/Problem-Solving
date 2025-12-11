#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int a, b;
    cin >> a >> b;
    int total  = a + b;
    if (total == 0)
    {
        cout << "NO" << "\n";
    }
    else if (abs(a - b) <=  1)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
    
    return 0;
}
