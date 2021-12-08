#include <stdio.h>
#include <stdlib.h>

/* A binary tree node has data, pointer to left child
and a pointer to right child */
struct node {
int data;
struct node* left;
struct node* right;
};

/* Helper function that allocates a new node with the
given data and NULL left and right pointers. */
struct node* newNode(int data)
{
struct node* node
= (struct node*)malloc(sizeof(struct node));
node->data = data;
node->left = NULL;
node->right = NULL;

return (node);
}

/* Given a binary tree, print its nodes according to the
"bottom-up" postorder traversal. */
void printPostorder(struct node* node)
{
if (node == NULL)
return;

// first recur on left subtree
printPostorder(node->left);

// then recur on right subtree
printPostorder(node->right);

// now deal with the node
printf("%d ", node->data);
}


/* Driver program to test above functions*/
int main()
{
struct node* root = newNode(12);
root->left = newNode(7);
root->right = newNode(17);
root->left->left = newNode(2);
root->left->left->left = newNode(1);
root->right->left = newNode(14);
root->right->right= newNode(20);



printf("\nPostorder traversal of binary tree is \n");
printPostorder(root);

getchar();
return 0;
}

