#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

struct Node* createNode(int value) {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data = value;
    n->left = n->right = NULL;
    return n;
}

struct Node* insert(struct Node* root, int value) {
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

int height(struct Node* root) {
    int lh, rh;
    if (root == NULL)
        return 0;

    lh = height(root->left);
    rh = height(root->right);

    return (lh > rh ? lh : rh) + 1;
}

int countNodes(struct Node* root) {
    if (root == NULL)
        return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int countLeafNodes(struct Node* root) {
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 1;

    return countLeafNodes(root->left) + countLeafNodes(root->right);
}

int countTwoChildNodes(struct Node* root) {
    if (root == NULL)
        return 0;

    if (root->left != NULL && root->right != NULL)
        return 1 + countTwoChildNodes(root->left) + countTwoChildNodes(root->right);

    return countTwoChildNodes(root->left) + countTwoChildNodes(root->right);
}

int main() {
    struct Node* root = NULL;
    int choice, value;

    while (1) {
        printf("\n\n1. Insert Node");
        printf("\n2. Height of Tree");
        printf("\n3. Count Total Nodes");
        printf("\n4. Count Leaf Nodes");
        printf("\n5. Count Nodes with Two Children");
        printf("\n6. Exit");
        printf("\nEnter choice: ");

        if (scanf("%d", &choice) != 1)
            return 0;

        switch (choice) {
            case 1:
                printf("Enter value: ");
                if (scanf("%d", &value) != 1)
                    return 0;
                root = insert(root, value);
                break;

            case 2:
                printf("Height of tree: %d", height(root));
                break;

            case 3:
                printf("Total nodes: %d", countNodes(root));
                break;

            case 4:
                printf("Leaf nodes: %d", countLeafNodes(root));
                break;

            case 5:
                printf("Nodes with two children: %d", countTwoChildNodes(root));
                break;

            case 6:
                printf("Exiting program\n");
                return 0;

            default:
                printf("Invalid choice");
        }
    }
}
