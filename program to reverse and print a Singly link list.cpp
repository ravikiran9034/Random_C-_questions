/*Write a program to reverse and print a Singly link list with values 11,9,7,5,3,1*/

#include <iostream>
using namespace std;

// Node structure for singly linked list
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to reverse the linked list
Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;
    
    while (current != nullptr) {
        next = current->next; // Store next
        current->next = prev; // Reverse current node's pointer
        prev = current;       // Move prev to current
        current = next;       // Move current to next
    }
    
    return prev; // New head after reversal
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data;
        if (temp->next != nullptr) {
            cout << " ";
        }
        temp = temp->next;
    }
    cout << endl;
}

// Function to delete the linked list to free memory
void deleteList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

int main() {
    // Create the linked list with values [11, 9, 7, 5, 3, 1]
    Node* head = new Node(11);
    head->next = new Node(9);
    head->next->next = new Node(7);
    head->next->next->next = new Node(5);
    head->next->next->next->next = new Node(3);
    head->next->next->next->next->next = new Node(1);
    
    // Reverse the linked list
    head = reverseList(head);
    
    // Print the reversed linked list
    printList(head);
    
    // Clean up memory
    deleteList(head);
    
    return 0;
}