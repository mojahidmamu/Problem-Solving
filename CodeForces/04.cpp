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

// insert at tail:
void insert_at_tail(Node *&head, Node *&tail, int val)
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

// print fun:
void print_liked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
};

// Remove Duplicate:
void removeDuplicates(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        Node *prev = tmp;
        Node *runner = tmp->next;

        while (runner != NULL)
        {
            if (runner->val == tmp->val)
            {
                prev->next = runner->next;
                runner = prev->next;
            }
            else
            {
                prev = runner;
                runner = runner->next;
            }
        }
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
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

    // Duplicate Function:
    removeDuplicates(head);

    // Print fun:
    print_liked_list(head);

    return 0;
}
