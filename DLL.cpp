#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node * next;
        Node * prev;
};

Node * createNode(int data) {
    Node * newNode = new Node();
    newNode -> data = data;
    newNode -> next = NULL;
    newNode -> prev = NULL;
    return newNode;
}

Node * insertFront(Node * head, int data) {
    Node * newNode = createNode(data);
    // we want to insert in front so newNode.next should be head and head.prev should be newNode and then shift head to newNode
    newNode->next = head;
    if (head != NULL) {
        head->prev = newNode;
    }
    return newNode; // to change head to newNode
}

Node * insertLast(Node * head, int data) {
    Node * newNode = createNode(data);
    Node * temp = head;
    if (head != NULL) {
        while (temp -> next != NULL) {
            temp = temp -> next;
        }
        temp -> next = newNode;
        newNode->prev = temp;
    }
    return head;
}

Node * insertSorted(Node * head, int data) {
    Node * newNode = createNode(data);
    // if head is null then return newNode as head
    if (head == NULL) {
        return newNode;
    } else if (head -> data > newNode -> data) {
        // if first node has greater value then insert front
        head = insertFront(head, data);
    } else {
        // it can be possible that last node is also smaller than newNode
        // then insert Last or else insert at appropriate position
        // use 2 pointers current and next
        // we need to run the loop till we find a position such that 
        // current -> data < newNode -> data and next -> data >= newNode -> data
        Node * current = head, * nxt = current -> next;
        while (nxt != NULL) {
            if (current -> data < newNode -> data and nxt -> data >= newNode -> data) {
                break;
            }
            current = current -> next;
            nxt = current -> next;
        }
        current -> next = newNode;
        newNode -> next = nxt;
        if (nxt != NULL)   nxt -> prev = newNode;
        newNode -> prev = current;
    }
    return head;
}

void printList(Node* node) 
{ 
    Node* last; 
    cout<<"\nTraversal in forward direction \n"; 
    while (node != NULL) 
    { 
        cout<<" "<<node->data<<" "; 
        last = node; 
        node = node->next; 
    } 
  
    cout<<"\nTraversal in reverse direction \n"; 
    while (last != NULL) 
    { 
        cout<<" "<<last->data<<" "; 
        last = last->prev; 
    } 
} 

int main() {
    Node * head = NULL;
    head = insertFront(head, 0);
    head = insertLast(head, 1);
    // head = insertFront(head, -1);
    // head = insertFront(head, -2);
    head = insertSorted(head, 2);
    // head = insertSorted(head, 1);
    // head = insertSorted(head, 4);
    // head = insertSorted(head, 3);

    printList(head);
    return 0;
}
