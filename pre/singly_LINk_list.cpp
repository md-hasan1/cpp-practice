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

void insertedTail(Node *&head, Node *&tail, int value)
{
    Node *temp = head;
    Node *newNode = new Node(value);
    if (temp == NULL)
    {
        // cout<<"in NUll";
        head = tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}
void insertedAtHead(Node *&head, Node *&tail, int val)
{
    Node *temp = head;
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

void insert_any_position(int pos, Node *&head, int val)
{
    Node *temp = head;
    Node *newNode = new Node(val);
    for (int i = 1; i < pos; i++)
    {
        // cout<<"sldjflajfljas";
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void print_link_list(Node *&head)
{
    Node *temp = head;
    // cout<<"hdslf";
    while (temp != NULL)
    {
        // cout<<temp->val<<"lfksjdlkfjlskjfas";
        cout << temp->val << " ";
        temp = temp->next;
    }
}
void deleteAtHead(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void deleteAtTail(Node *head, Node *&tail)
{
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        /* code */
        // cout << temp->val;
        temp = temp->next;
    }

    
    Node *deleteNode = temp->next;
    temp->next = NULL; 
    // cout<<deleteNode->val<<tail->val<<endl;
    tail = temp;
 delete deleteNode; 
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
        //    cout<<val;
        insertedTail(head, tail, val);
    }

    // while (1)
    // {
    //     int val;
    //     cin >> val;

    //     if (val == -1)
    //     {
    //         break;
    //     }
    //     insertedAtHead(head,tail ,val);
    // }
    // insert_any_position(3,head,100);

    // deleteAtHead(head);
    // deleteAtHead(head);
    deleteAtTail(head, tail);
    print_link_list(head);
    // cout << tail << endl;
    return 0;
}