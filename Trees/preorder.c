/*1. First visit root
2. Visit left subtree
3.visit right subtree*/

struct Node
{
    char c;
    struct Node* left;
    struct Node* right;
};

void preorder(struct Node* root)
{
    if(root==NULL) return;
    printf("%c",root->data); //first print the element at the root
    preorder(root->left);
    preorder(root->right);
}
