#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    char c;
    cin >> c;
    int next_char = (int)c + 1;
    if (c == 'z') {
        cout << 'a' << "\n";
    } else {
        cout << (char)next_char << "\n";
    }
    
    return 0;
}
