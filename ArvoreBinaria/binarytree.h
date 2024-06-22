#ifndef BINARY_TREE_H
#define BINARY_TREE_H

// Estrutura do nó da árvore binária
typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

// Protótipos das funções
Node* createNode(int data);
Node* insertNode(Node* root, int data);
void inOrder(Node* root);
void preOrder(Node* root);
void postOrder(Node* root);
Node* searchNode(Node* root, int data);
Node* deleteNode(Node* root, int data);

#endif /* BINARY_TREE_H */
