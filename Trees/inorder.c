void inorder(struct Node* root)
{
    if(root==NULL) return;
    inorder(root->left);
    printf("%c",root->data);
    inorder(root->right);
}
