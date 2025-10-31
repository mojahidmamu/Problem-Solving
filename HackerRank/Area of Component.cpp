#include <bits/stdc++.h>
using namespace std;

int N, M;
bool valid(int i, int j)
{
    if (i < 0 || i >= N || j < 0 || j >= M)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    cin >> N >> M;
    return 0;
}
