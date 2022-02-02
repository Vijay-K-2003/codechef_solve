struct Node {
    int data;
    Node *left;
    Node *right;
};

struct Node* NewNode(int data) {
    Node* node = new Node();
    node->data = data;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}
