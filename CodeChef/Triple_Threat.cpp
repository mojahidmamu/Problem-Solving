#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    // k is the number of columns that will result in '0' in f(A)
    int k = min(n, (3 * n - x) / 2);
    
    // The remaining columns (n - k) will result in '1' in f(A)
    int majority_ones_cols = n - k;

    // Create three separate rows to construct the 3N string easily
    string r1(n, '0'), r2(n, '0'), r3(n, '0');

    int rem = x;

    // Phase 1: Fill the majority-one columns from the back (right to left)
    // We want to pack them with 3 ones where possible, and 2 ones if needed.
    for (int i = n - 1; i >= k; i--) {
        int left_cols = i - k; // columns remaining in this phase to the left
        
        // If we have enough ones left that even filling all remaining cols 
        // with 2 ones isn't enough, we MUST put 3 ones in this column.
        if (rem > 2 * left_cols + 2) {
            r1[i] = '1'; r2[i] = '1'; r3[i] = '1';
            rem -= 3;
        } else {
            r1[i] = '1'; r2[i] = '1'; r3[i] = '0';
            rem -= 2;
        }
    }

    // Phase 2: Distribute the remaining ones into the first k columns
    // Since these are majority-zero, each column can take at most one '1'.
    for (int i = k - 1; i >= 0 && rem > 0; i--) {
        r1[i] = '1';
        rem--;
    }

    // Concatenate the rows to match the output structure: A_1...A_N, A_N+1...A_2N, A_2N+1...A_3N
    cout << r1 << r2 << r3 << '\n';
}

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}