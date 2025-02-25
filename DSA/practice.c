#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
void inorder(struct node *root)
{
    if (root != NULL)
    {

        inorder(root->left);
        printf("%d \t", root->data);
        inorder(root->right);
    }
}
void insertNode(struct node *root, int key)
{
    while (root != NULL)
    {
        if (root->data == key)
        {
            printf("%d already exist in the tree and can't be inserted again \n", key);
            break;
        }
        else if (root->data > key)
        {
            insertNode(root->left, key);
        }
        else
        {
            insertNode(root->right, key);
        }
    }
}
struct node *createnode(int data)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    new->left = NULL;
    new->right = NULL;
    return new;
}
int main()
{
    struct node *root = createnode(23);
    inorder(root);
    return 0;
}