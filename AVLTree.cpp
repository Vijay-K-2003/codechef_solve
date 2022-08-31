#include <bits/stdc++.h>
using namespace std;

// Creating a Node
class Node {
    public: 
        int key;
        Node * left;
        Node * right;
        int height;
};


// Utility
int max (int a, int b) {
    return a > b ? a : b;
}
int height(Node* N) {
    if (N == NULL) return 0;
    else return N -> height;
}
int getBalance(Node * N) {
    if (N == NULL) return 0;
    return height(N -> left) - height(N -> right);
}
Node * balance(Node * root, int balance) {

}

// create a New Node
Node * newNode(int key) {
    Node * node = new Node();
    node -> key = key;
    node -> height = 1;
    node -> left = NULL;
    node -> right = NULL;
}

Node * rightRotate(Node * y) {
    
    Node * x = y -> left;
    Node * t = x -> right;

    x -> right = y;
    y -> left = t;

    x -> height = max ( height(x -> right) , height(x -> left) ) + 1 ;
    y -> height = max ( height(y -> left) , height(y -> right) ) + 1 ;
    
    return x;
}

Node * leftRotate(Node * x) {

    Node * y = x -> right;
    Node * t = y -> left;

    y -> left = x;
    x -> right = t;

    x -> height = max(height(x -> left), height(x -> right)) + 1;
    y -> height = max(height(y -> left), height(y -> right)) + 1;

    return y;
}

Node * insert(Node * node, int key) {

    // BST insertion
    if (node == NULL) return newNode(key);
    if (key < node -> key) node -> left = insert(node -> left, key);
    else if (key > node -> key) node -> right = insert(node -> right, key);
    else return node;

    // update height
    node -> height = max(height(node -> right), height(node -> left)) + 1;

    int balance = getBalance(node);

    // LL
    if (balance > 1 and key < node -> left -> key) {
        return rightRotate(node);
    }
    // RR
    if (balance < -1 and key > node -> right -> key) {
        return leftRotate(node);
    }
    // LR = Left Rotate + Right Rotate
    if (balance > 1 and key > node -> left -> key) {
        node -> left = leftRotate(node -> left);
        return rightRotate(node);
    }
    // RL = Right Rotate + Left Rotate
    if (balance < -1 and key < node -> right -> key) {
        node -> right = rightRotate(node -> right);
        return leftRotate(node);
    }

    return node;
} 

Node * minValueNode(Node * node) {
    // move left till we reach leaf node
    Node * current = node;
    while (current -> left != NULL) current = current -> left;
    return current;
}

Node * deleteNode(Node * root, int key) {
    
    if (root == NULL)                   return root;
    if (key < root -> key)              root -> left = deleteNode(root -> left, key);
    else if (key > root -> key)         root -> right = deleteNode(root -> right, key);
    else {
        if (root -> left == NULL or root -> right == NULL) {
            
            Node * temp = root -> left ? root -> left : root -> right;

            if (temp == NULL) {
                temp = root;
                root = NULL;
            } else {
                * root = * temp;
            }

            free(temp);
        } else {
            Node * temp = minValueNode(root -> right);
            root -> key = temp -> key;
            root -> right = deleteNode(root -> right, temp -> key);
        }
    }

    if (root == NULL) {
        return root;
    }

    root -> height = max(height(root -> left), height(root -> right)) + 1;
    int balance = getBalance(root);

    // LL 
    if (balance > 1 and getBalance(root->left) >= 0)
        return rightRotate(root);
 
    // LR
    if (balance > 1 and getBalance(root->left) < 0) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }
 
    // RR
    if (balance < -1 and getBalance(root->right) <= 0) 
        return leftRotate(root);
 
    // RL
    if (balance < -1 and getBalance(root->right) > 0) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }
 
    return root;
}

int findMax(Node* root) 
{ 
    if (root == NULL) 
    return INT_MIN; 
   
    int res = root->key; 
    int leftRes = findMax(root->left); 
    int rightRes = findMax(root->right); 
    if (leftRes > res) 
    res = leftRes; 
    if (rightRes > res) 
    res = rightRes;
    
    return res; 
}

