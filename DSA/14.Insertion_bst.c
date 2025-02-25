// This is a program to insert a node in a BST
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
// function to insert node in BST
void insertNode(struct node *root, int key)
{
    struct node *prev = NULL; // creating a new null node
    while (root != NULL)
    {
        prev = root; // prev will store a previous node of root

        if (key == root->data) // checking if the element is already in the tree
        {
            printf("%d is avilable in the tree and can't be inserted again\n", key);
            break;
        }
        else if (key > root->data)
        {
            root = root->right;
        }
        else
        {
            root = root->left;
        }
    }
    struct node *new = createNode(key); // creating a new node for the key
    if (prev->data > key)
    {
        prev->left = new;
    }
    else
    {
        prev->right = new;
    }
}

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d \t ", root->data);
        inOrder(root->right);
    }
}

int main()
{
    // TREE LOOKS LIKE THIS
    //      9
    //     / \ 
    //    4   11
    //   / \    \
    //  2   7    15
    //     / \   /
    //    5  8  14
    struct node *root = createNode(9);

    struct node *R1 = createNode(11);
    struct node *R2 = createNode(15);
    struct node *R3 = createNode(14);

    struct node *L1 = createNode(4);
    struct node *L2 = createNode(2);
    struct node *L3 = createNode(7);
    struct node *L4 = createNode(5);
    struct node *L5 = createNode(8);

    // Constructing the tree
    root->left = L1;
    root->right = R1;

    L1->left = L2;
    L1->right = L3;

    L3->left = L4;
    L3->right = L5;

    R1->right = R2;
    R2->left = R3;

    // insertNode(root, 6);

    return 0;
}