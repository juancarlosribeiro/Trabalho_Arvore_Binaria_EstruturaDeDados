#include <stdio.h>
#include "binarytree.h"

int main() {
    Node* root = NULL;

    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);

    printf("In-order traversal: ");
    inOrder(root);
    printf("\n");

    printf("Pre-order traversal: ");
    preOrder(root);
    printf("\n");

    printf("Post-order traversal: ");
    postOrder(root);
    printf("\n");

    int key = 40;
    Node* foundNode = searchNode(root, key);
    if (foundNode != NULL) {
        printf("Node %d found in the tree.\n", key);
    } else {
        printf("Node %d not found in the tree.\n", key);
    }

    root = deleteNode(root, 20);
    printf("In-order traversal after deleting 20: ");
    inOrder(root);
    printf("\n");

    root = deleteNode(root, 30);
    printf("In-order traversal after deleting 30: ");
    inOrder(root);
    printf("\n");

    root = deleteNode(root, 50);
    printf("In-order traversal after deleting 50: ");
    inOrder(root);
    printf("\n");

    return 0;
}