//Find node that would come immediately after the given node in inorder traversal
//in BST this would be  the next higher number during traversal
//try to find successor in O(H) time where H is height of tree
// if for node there is a right subtree the next inorder successor is the node as left as possible
//Case 1:Node has right subtree Find min in right subtree or  go deep to leftmost node in right subtree
//Case 2: No right subtree = if going from left then successor will be the parent else it will be the grandparent
// Create an extra field in struct pointing to the parent of the given node
//or walk down from root to node and deepest ancestor in left will be the successor only if there is no right subtree

struct Node
{
    int data;
    Node* left;
    Node* right;
};


Node* FindMin(Node* root)
{
     if(root==NULL)
    {
        return NULL;
    }
    // Node has right subtree
    {
        while(root->left!=NULL) root=root->left;
        return root;
    }
}

//to find successor
Node* GetSuccessor(Node* root, int data) //returns int element
{
    //Search the Node(O(H))
    struct* current=Find(root,data);
    if(current==NULL)
    {
        return NULL;
    }
    // Node has right subtree
    if(current->right!=NULL)
    {
        return FindMin(current->right);
    }
    //Case2: No right subtree
    else
    {
        Node* successor=NULL;
        Node* ancestor=root;
        while(ancestor!=current)
        {
            if(current->data < ancestor->data)
            {
                successor=ancestor;
                ancestor=ancestor->left;
            }
            else
                ancestor=ancestor->right;
        }
        return successor;
    }


}
