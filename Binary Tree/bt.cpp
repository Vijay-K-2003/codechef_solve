struct Node {
    int data;
    Node *left;
    Node *right;
};

Node* NewNode(int data) {
    Node* node = new Node();
    node->data = data;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

Node* insertLeft(Node* node, int data) {
    if (node->left == nullptr) {
        node->left = NewNode(data);
    } else {
        insertLeft(node->left, data);
    }
    return node;
}

Node* insertRight(Node* node, int data) {
    if (node->right == nullptr) {
        node->right = NewNode(data);
    } else {
        insertRight(node->right, data);
    }
    return node;
}

void deleteLeft(Node* node) {
    if (node->left != nullptr) {
        deleteLeft(node->left);
    }
    delete node->left;
    node->left = nullptr;
}

