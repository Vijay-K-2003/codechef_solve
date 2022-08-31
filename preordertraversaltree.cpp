//Function to return a list containing the preorder traversal of the tree.
vector <int> preorder(Node* root)
{
    vector<int> sol;
    stack<Node*> s;
    Node * curr = root;
    while(!s.empty() or curr != NULL) {
        while (curr != NULL) {
            sol.push_back(curr->data);
            if (curr -> right) s.push(curr->right);
            curr = curr -> left;
        }
        if (!s.empty()) {
            curr = s.top();
            s.pop();
        }
    }
    return sol;
}
