#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int T;
    cin >> T;
    while (T--)
    {
        string S, X;
        cin >> S >> X;
        while (S.find(X) != string::npos)
        {
            S.replace(S.find(X), X.size(), "#");
        }
        
        cout << S << endl;
    }
    
    return 0;
}
