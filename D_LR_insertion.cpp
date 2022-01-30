#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void printInorder(struct Node* node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;

    struct Node *root = new Node(0);
    struct Node *curr = root;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            curr->left = new Node(i + 1);
            curr = curr->left;
        }
        else
        {
            curr->right = new Node(i + 1);
            curr = curr->right;
        }
    }
    printInorder(root);
    return 0;
}