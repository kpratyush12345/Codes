#include <bits/stdc++.h>
using namespace std;

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

void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = newNode;
}

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

// Optimal way to reverse a linked list - TC : O(n)  SC: O(1)
void reverseList(Node *&head)
{
    Node *newHead = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        Node *next = curr->next;
        curr->next = newHead;
        newHead = curr;
        curr = next;
    }
    display(newHead);
}

// Brute force way to create a linked list - TC : O(3n)  SC: O(n)
void reverseUsingLoop(Node *head)
{
    vector<int> arr; // Initialising Array

    // Looping and adding each data in the array
    Node *curr = head;
    while (curr != NULL)
    {
        arr.push_back(curr->data);
        curr = curr->next;
    }

    // reverse the array
    reverse(arr.begin(), arr.end());

    // Now creating a new linked list and looping through the reverse array and adding the data to the new linked list
    Node *newLL = NULL;
    for (int i = 0; i < arr.size(); i++)
    {
        insertAtTail(newLL, arr[i]);
    }
    // Display the linked list
    display(newLL);
}

int main()
{
    // Write the code from here
    Node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);

    display(head);

    reverseUsingLoop(head); // Brute force
    reverseList(head);      // Optimal

    return 0;
}