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

// max-height:
int max_height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 0;
    }
    int l = max_height(root->left);
    int r = max_height(root->right);
    int maximum = max(l, r);
    return maximum + 1;
}

int count_nodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = count_nodes(root->left);
    int right = count_nodes(root->right);
    return left + right + 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    Node *root = input_binary_tree();
    int maxHeight = max_height(root);
    int total_node = count_nodes(root);
    int cal = pow(2, maxHeight + 1) - 1;
    if (total_node == cal)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
