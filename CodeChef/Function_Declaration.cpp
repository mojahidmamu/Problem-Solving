// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define endl '\n'
// #define all(x) (x).begin(), (x).end()

// // Author: Abdullah all Mojahid

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;

//         class Solution {
// public:
//     int dfs(TreeNode * node, int &ans) {
//         if(node == NULL) return 0;
        
//         int left = max(0, dfs(node->left, ans));
//         int right = max(0, dfs(node->right, ans));
        
//         ans = max(ans, left + right + node->val);
        
//         return node->val + max(left, right);
//     }

//     int maxPathSum(TreeNode* root) {
//         int ans = INT_MIN;
//         dfs(root, ans);
//         return ans;
//     }
// };
//     }

//     return 0;
// }
