/*single linked list*/
#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the end
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node();   // create new node
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {           // if list is empty
        head = newNode;
        return;
    }

    Node* temp = head;            // traverse till last node
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;         // link new node
}

// Function to delete a node from the beginning
void deleteFromBeginning(Node*& head) {
    if (head == NULL) {
        cout << "List is already empty!" << endl;
        return;
    }

    Node* temp = head;            // store head node
    head = head->next;            // move head
    delete temp;                  // delete first node
    cout << "First node deleted." << endl;
}

// Function to display the linked list
void displayList(Node* head) {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    cout << "Linked List: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Main function
int main() {
    Node* head = NULL;   // initialize empty list

    // Insert elements at end
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    // Display list
    displayList(head);

    // Delete one element from beginning
    deleteFromBeginning(head);

    // Display list again
    displayList(head);

    return 0;
}
