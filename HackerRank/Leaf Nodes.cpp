#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
// input :
Node *input_binary_tree()
{
    int val;
    cin >> val;

    if (val == -1)
        return NULL;

    Node *root = new Node(val);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *current = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1)
        {
            current->left = new Node(l);
            q.push(current->left);
        }
        if (r != -1)
        {
            current->right = new Node(r);
            q.push(current->right);
        }
    }
    return root;
}

void count_leaf_nodes(Node *root, vector<int> &v)
{
    if (root == NULL)
    {
        return;
    }
    count_leaf_nodes(root->left, v);
    count_leaf_nodes(root->right, v);
    if (root->left == NULL && root->right == NULL)
    {
        v.push_back(root->val);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    Node *root = input_binary_tree();
    vector<int> leaf_nodes;
    count_leaf_nodes(root, leaf_nodes);
    sort(leaf_nodes.rbegin(), leaf_nodes.rend());
    for (int val : leaf_nodes)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
