#include <bits/stdc++.h>
using namespace std;

// Creating the structure of Linked list
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

// Adding elements to the tail of Linked List
void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    // If initially the linked list is empty
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    // Otherwise traverse and add the newNode to the end of linked list
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = newNode;
}

// Function to display the elements of the linked list
void display(Node *&head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << "NULL" << endl;
}

// Adding Node to the head of the linked list
void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

int main()
{
    // Write the code from here
    Node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head); // 1->2->3->NULL
    insertAtHead(head, 4);
    display(head); // 4->1->2->3->NULL
    return 0;
}