#include <bits/stdc++.h>
using namespace std;

vector<int> build(vector<int> &nums, int bit) {
    if (nums.empty() || bit < 0) return nums;

    vector<int> ones, zeros;
    for(int x : nums) {
        if (x & (1 << bit)) ones.push_back(x);
        else zeros.push_back(x);
    }

    vector<int> res;
    if(!ones.empty()) {
        auto tmp = build(ones, bit - 1);
        res.insert(res.end(), tmp.begin(), tmp.end());
    }
    if(!zeros.empty()) {
        auto tmp = build(zeros, bit - 1);
        res.insert(res.end(), tmp.begin(), tmp.end());
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int N = 1 << n;
        vector<int> nums(N);
        for(int i = 0; i < N; i++) nums[i] = i;

       
        vector<int> ones, rest;
        for(int x : nums) {
            if(x == N-1) ones.push_back(x);
            else rest.push_back(x);
        }

        vector<int> res = ones;
        auto tmp = build(rest, n-1);
        res.insert(res.end(), tmp.begin(), tmp.end());

        for(int x : res) cout << x << " ";
        cout << "\n";
    }

    return 0;
}
