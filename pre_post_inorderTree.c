#include <stdio.h>
#include <stdlib.h>

// Define the structure of a tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

// Insert function to build the tree
struct Node* insert(struct Node* root, int data) {
    if (root == NULL) return createNode(data);
    if (data < root->data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);
    return root;
}

// In-order traversal
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Post-order traversal
void postorder(struct Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

// Pre-order traversal
void preorder(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

// Main function
int main() {
    struct Node* root = NULL;
    int values[] = {5, 3, 7, 2, 4, 6, 8};
    int n = sizeof(values) / sizeof(values[0]);

    // Insert nodes into the binary tree
    for (int i = 0; i < n; i++) {
        root = insert(root, values[i]);
    }

    printf("In-order traversal: ");
    inorder(root);
    printf("\n");

    printf("Post-order traversal: ");
    postorder(root);
    printf("\n");

    printf("Pre-order traversal: ");
    preorder(root);
    printf("\n");

    return 0;
}