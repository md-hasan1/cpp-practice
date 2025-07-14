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
void print_list_link(Node *&head)
{

    if (head == NULL)
    {

        return;
    }

    cout << head->val << " ";

    print_list_link(head->next);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

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

Node* i = head;

    while (i != NULL) {
        Node* j = i;
        while (j->next != NULL) {
            if (j->next->val == i->val) {
                
                Node* deleteNode = j->next;
                j->next = j->next->next;
                delete deleteNode;
            } else {
                
                j = j->next;
            }
        }
        i = i->next;
    }
    print_list_link(head);
    cout << endl;

    return 0;
}