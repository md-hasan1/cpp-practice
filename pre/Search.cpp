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

// void insert_link_list(Node *&head, Node *&tail, int val)
// {
//     Node *newNode = new Node(val);
//     if (head == NULL)
//     {
//         head = tail = newNode;
//     }
//     else
//     {
//         tail->next = newNode;
//         tail = newNode;
//     }
// }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int size = 0;
        while (1)
        {
            int val;
            cin >> val;
            if (val == -1)
            {
                break;
            }
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

        int target;
        cin >> target;

        int flags = 0;
        int index = 0;
        Node *temp = head;
        while (temp != NULL)
        {
            if (target == temp->val)
            {
                flags = 1;
                break;
            }
            index += 1;
            temp = temp->next;
        }
        if (flags)
        {
            cout << index << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}