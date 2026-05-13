#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, X, K;
        cin >> N >> X >> K;

        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        // Step 1: Sort descending
        sort(A.begin(), A.end(), greater<int>());

        int clusters = 0;
        int count = 0;

        for (int i = 0; i < N; i++)
        {
            // New cluster
            if (i == 0 || A[i] != A[i - 1])
            {
                clusters++;
            }

            // Stop if clusters exceed K
            if (clusters > K)
                break;

            count++;
        }

        cout << min(count, X) << endl;
    }

    return 0;
}