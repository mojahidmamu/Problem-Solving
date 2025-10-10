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

void insert_at_head(Node *&head, Node *&tail, int &x, int &val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int &x, int &val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void delete_at_index(Node *&head, Node *&tail, int &v)
{
    if (head == NULL)
    {
        return;
    }
    if (head->val == v)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node *curr = head;
    while (curr->next != NULL && curr->next->val != v)
    {
        curr = curr->next;
    }
    if (curr->next == NULL)
    {
        return;
    }
    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    Node *head = NULL;
    Node *tail = NULL;

    int T;
    cin >> T;
    while (T--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_at_head(head, tail, x, v);
        }
        if (x == 1)
        {
            insert_at_tail(head, tail, x, v);
        }
        if (x == 2)
        {
            delete_at_index(head, tail, v);
        }
        }

    return 0;
}
