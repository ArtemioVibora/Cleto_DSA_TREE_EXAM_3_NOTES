#include <iostream>

using namespace std;

struct Node {
    int value;
    Node* left;
    Node* right;
};

void Preorder(Node *node) {
    if (node != NULL) {
        cout << node->value << endl;
        Preorder(node->left);
        Preorder(node->right);
    }
}

void Inorder(Node *node) {
    if (node != NULL) {
        Inorder(node->left);
        cout << node->value << endl;
        Inorder(node->right);
    }
}

void Postorder(Node *node) {
    if (node != NULL) {
        Postorder(node->left);
        Postorder(node->right);
        cout << node->value << endl;
    }
}


int main() {

}