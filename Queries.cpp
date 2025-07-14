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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {

        head = tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}
void print_list_link(Node *&head)
{

    if (head == NULL)
    {

        return;
    }

    cout << head->val << " ";

    print_list_link(head->next);
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}
void delete_any_positions(Node *&head, Node *&tail, int index)
{
    if (!head || index < 0)
        return;

    if (index == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }

        delete deleteNode;
        return;
    }

    Node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        if (!temp || !temp->next)
            return;
        temp = temp->next;
    }

    if (!temp->next)
        return;

    Node *deleteNode = temp->next;
    if (deleteNode == tail)
    {
        tail = temp;
    }
    temp->next = temp->next->next;
    delete deleteNode;
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int t;
    cin >> t;
    // cout << t << endl;
    for (int i = 0; i < t; i++)
    {

        // cout <<t<<"-"<<endl;
        int base;
        cin >> base;
        // cout << base << endl;
        if (base == 0)
        {
            int val;
            cin >> val;
            // cout<<val<<endl;
            insert_at_head(head, tail, val);
            print_list_link(head);
        }
        else if (base == 1)
        {
            int val;
            cin >> val;
            insert_at_tail(head, tail, val);
            print_list_link(head);
        }
        else if (base == 2)
        {
            int index;
            cin >> index;

            delete_any_positions(head, tail, index);
            print_list_link(head);
        }
        cout << endl;
    }

    // print_list_link(head);

    return 0;
}