#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int &val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

int max_value(Node *head)
{
    int max_val = head->val;
    Node *temp = head->next;
    while (temp != NULL)
    {
        if (temp->val > max_val)
        {
            max_val = temp->val;
            temp = temp->next;
        }
        else
        {
            temp = temp->next;
        }
    }
    return max_val;
}

int min_value(Node *head)
{
    int min_val = head->val;
    Node *temp = head->next;
    while (temp != NULL)
    {
        if (temp->val < min_val)
        {
            min_val = temp->val;
            temp = temp->next;
        }
        else
        {
            temp = temp->next;
        }
    }
    return min_val;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {
            insert_at_tail(head, tail, val);
        }
    }

    int mx = max_value(head);
    int mn = min_value(head);

    cout << mx - mn << endl;

    return 0;
}
