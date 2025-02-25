// Searching Using recursion in BST
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createNode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        printf("No Space \n");
    }
    else
    {
        n->data = data;
        n->left = NULL;
        n->right = NULL;
    }
    return n;
}
// Function for the searching the element;
void searching(struct node *root, int key)
{
    if (root != NULL)
    {
        if (root->data == key)
        {
            printf("%d is in the tree\n", key);
        }
        else if (key > root->data)
        {
            // printf("%d \t", root->data);  // Printing the elements it access;

            searching(root->right, key);
        }
        else if (key < root->data)
        {
            // printf("\n");
            // printf("%d \t", root->data);

            searching(root->left, key);
        }
    }
}
int main()
{
    // creating a tree
    struct node *root = createNode(50);
    struct node *L1 = createNode(40);
    struct node *L2 = createNode(20);
    struct node *L3 = createNode(43);
    struct node *R1 = createNode(60);
    struct node *R2 = createNode(55);
    struct node *R3 = createNode(70);

    // connecting the nodes;
    root->left = L1;
    root->right = R1;

    L1->left = L2;
    L1->right = L3;

    R1->left = R2;
    R1->right = R3;

    searching(root, 50); // Function call
    return 0;
}
