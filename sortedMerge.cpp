#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    Node * next;
    int data;
};

Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    Node * res;
    if (head1 == NULL)  return head2;
    if (head2 == NULL)  return head1;
    
    if (head1 -> data >= head2 -> data) {
        res = head2;
        res -> next = sortedMerge(head1, head2->next);
    } else {
        res = head1;
        res -> next = sortedMerge(head2, head1->next);
    }
    return res;
} 
