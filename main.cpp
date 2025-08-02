#include <iostream>
#include <malloc.h>

using namespace std;

struct Node {
    int value;
    Node* left;
    Node* right;
};
Node* createNode(int val) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->value = val;
    node->left = NULL;
    node->right = NULL;

    return node;
}

Node* inserter(Node *root, int value) {
    if (root == NULL) {
        return createNode(value);
    }
    if (root-> value > value) {
        root->left = inserter(root->left, value);
    }
    else if (root-> value < value) {
        root->right = inserter(root->right, value);
    }
    return root;

}

void Preorder(Node *node) {

    if (node != NULL) {
        cout << node->value << " ";
        Preorder(node->left);
        Preorder(node->right);
    }

}

void Inorder(Node *node) {
    if (node != NULL) {
        Inorder(node->left);
        cout << node->value << " ";
        Inorder(node->right);
    }

}

void Postorder(Node *node) {

    if (node != NULL) {
        Postorder(node->left);
        Postorder(node->right);
        cout << node->value << " ";
    }

}

void test() {
    Node n1, n2, n3, n4, n5, n6, n7;

    n1.value = 1;
    n2.value = 2;
    n3.value = 10;
    n4.value = 20;
    n5.value = 3;
    n6.value = 42;
    n7.value = 9;

    Node root;
    root.value = 5;
    root.left = &n1;
    root.right = &n3;

    n1.left = NULL;
    n1.right = &n2;

    n2.left = NULL;
    n2.right = &n5;

    n3.left = &n7;
    n3.right = &n4;

    n7.left = NULL;
    n7.right = NULL;

    n4.right = &n6;
    n4.left = NULL;

    n6.right = NULL;
    n6.left = NULL;

    cout << "---------------------------------------------------" << endl;
    cout << "Preorder traversal: ";
    Preorder(&root);
    cout << endl;
    cout << "Inorder traversal: ";
    Inorder(&root);
    cout << endl;
    cout << "Postorder traversal: ";
    Postorder(&root);
    cout << endl;
    cout << "---------------------------------------------------" << endl;

    Node *newRoot;
    newRoot->value = 5;
    newRoot->left = NULL;
    newRoot->right = NULL;
    for (int i = 1; i < 6; i++) {

    }



}

int main() {
    test();
}