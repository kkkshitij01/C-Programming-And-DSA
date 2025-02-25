#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// Function to construct a new node;
struct node *createNode(int newData)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = newData;
    n->left = NULL;
    n->right = NULL;
    return n;
}

// Preorder Traversal of the tree
void preOrder(struct node *root)
{
    if (root != NULL)
    {

        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
// PostOrder Traversal of the tree
void postOrder(struct node *root)
{
    if (root != NULL)
    {

        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}
// inOrder Traversal of the tree
void inOrder(struct node *root)
{
    if (root != NULL)
    {

        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

int main()
{
    // TREE LOOKS LIKE THIS
    //      4
    //     / \ 
    //    1   6
    //   / \ 
    //  5   2

    struct node *head = createNode(4);
    struct node *R1 = createNode(6);
    struct node *L1 = createNode(1);
    struct node *L2 = createNode(5);
    struct node *L3 = createNode(2);

    // Constructing the tree
    head->left = L1;
    head->right = R1;

    L1->left = L2;
    L1->right = L3;
    printf("This is the pre order traversal \n");
    preOrder(head);
    printf("\n");

    printf("This is the post order traversal \n");
    postOrder(head);
    printf("\n");

    printf("This is the in order traversal \n");
    inOrder(head);
    printf("\n");

    return 0;
}