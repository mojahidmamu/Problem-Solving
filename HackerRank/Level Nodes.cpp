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

void order_level(Node *root, int target_level)
{
    if (!root)
    {
        cout << "Invalid" << endl;
        return;
    }

    queue<pair<Node *, int>> q;
    q.push({root, 0});
    bool found = false;

    while (!q.empty())
    {
        Node *current = q.front().first;
        int level = q.front().second;

        if (level == target_level)
        {
            cout << current->val << " ";
            found = true;
        }
        else if (level > target_level)
        {
            break;
        }
        if (current->left)
        {
            q.push({current->left, level + 1});
        }
        if (current->right)
        {
            q.push({current->right, level + 1});
        }
    }
    //
    if (!found)
    {
        cout << "Invalid" << endl;
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    Node *root = input_binary_tree();
    int x;
    cin >> x;
    order_level(root, x);
    return 0;
}
