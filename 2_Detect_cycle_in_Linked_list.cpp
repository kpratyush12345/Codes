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

// Same insert at Tail function
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

// Same display function
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

// Brute Force Approach to Detect a cycle in Linked list - Time Complexity : O(n) Space Complexity : O(n)
bool hasCycleMapApproach(Node *head)
{

    map<Node *, bool> mp; // Initialising a map to store the occurences

    Node *curr = head; // Looping and checking if already that node is inside the map if it is then return true
    while (curr != NULL)
    {
        if (mp.find(curr) != mp.end())
        {
            return true;
        }
        else
        {
            mp[curr] = true; // else make the second value as true and loop again until the stopping condition
        }
        curr = curr->next;
    }
    return false; // Lastly return false if true is not returned in above step
}

// Efficient Approach using slow-fast pointer - Time Complexity : O(n)  Space Complexity : O(1)
bool hasCycle(Node *&head)
{
    // If head or head of next is null then return false as there will be no cycle
    if (head == NULL || head->next == NULL)
    {
        return false;
    }

    // Declaring slow and fast pointer
    Node *fast = head;
    Node *slow = head;

    // Stop when fast of next or fast of next of next any one is not equal to NULL
    while (fast->next != NULL && fast->next->next != NULL)
    {
        fast = fast->next->next; // fast pointer will increment by two steps
        slow = slow->next;       // slow pointer will increment by one step

        // if slow and fast pointer coincides then cycle is detected return true
        if (fast == slow)
        {
            return true;
        }
    }
    return false; // else return false
}

// Function to create a cycle inside a linked list
void createCycle(Node *&head)
{
    // Looping through th end of the linked list
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    // pointing the end of the linked list to the second element tht is why it is equal to head of next of next if in case it was to point first element the we would write head->next only
    curr->next = head->next->next;
}

int main()
{
    // Write the code from here
    Node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);

    createCycle(head); // creating cycle in linked list so that it is detected

    cout << hasCycleMapApproach(head); // brute force
    cout << hasCycle(head);            // Optimal
    return 0;
}