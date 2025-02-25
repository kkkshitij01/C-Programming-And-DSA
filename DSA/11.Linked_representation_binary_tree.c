#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createNode(int value)
{
    // Constructing node using a Function
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = value;
    n->left = NULL;
    n->right = NULL;
    return n;
}
int main()
{
    // // constructing the root node
    // struct node *head;
    // head = (struct node *)malloc(sizeof(struct node));

    // //Constructing the first Right node
    // struct node *R1;
    // R1 = (struct node *)malloc(sizeof(struct node));
    // R1->data = 23;
    // R1->left = NULL;
    // R1->right = NULL;

    // // constructing the first left node;
    // struct node *L1;
    // L1 = (struct node *)malloc(sizeof(struct node));
    // L1->data = 234;
    // L1->left = NULL;
    // L1->right = NULL;

    // head->left = L1;  // linking the root node with the left node;
    // head->right = R1; // Linking the root node with the right node;
    //
    // b vb o
    //
    //
    //
    // BETTER WAY USING THE FUNCTIONS

    struct node *head = createNode(12);
    struct node *L1 = createNode(12);
    struct node *R1 = createNode(12);

    // Linking the root node;
    head->left = L1;
    head->right = R1;
    printf("There is no output of the program \nEND OF THE PROGRAM\n");
    return 0;
}