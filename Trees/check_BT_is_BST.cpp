bool isSubTreeLesser(struct Node* root,int value)//to check if all elements in the left subtree is lesser than the value at root
{
    if(root==NULL)
        return true;
    if((root->data<=value)&&isSubTreeLesser(root->left,value)&&isSubTreeLesser(root->right,value))
        return true;
    else
        return false;
}


bool isSubTreeGreater(struct Node* root,int value)//to check if all elements in the left subtree is lesser than the value at root
{
    if(root==NULL)
        return true;
    if((root->data>value)&&isSubTreeGreater(root->left,value)&&isSubTreeGreater(root->right,value))
        return true;
    else
        return false;
}

bool isBST(struct Node* root)
{
    if(root==NULL)
        return true;
    if(isSubTreeLesser(root->left,root->data)&&isSubTreeGreater(root->right,root->data)&&isBST(root->left)&&isBST(root->right))
    {
        return true;
    }
    else
        reurn false;
}


//above func are really expensive; hence instead of comparing all nodes with the root node, we can check if the given node value
//is within a particular range.

bool IsBSTUtil(Node* root,int minValue,int maxValue)
{
    if(root==NULL)
        return true;
    if(root->data>minValue && root->data<maxValue &&IsBSTUtil(root->left,minValue,root->data) && IsBSTUtil(root->right,root->data,maxValue))
        return true;
    else
        return false;
}

bool IsBST(Node* root)
{
    return IsBSTUtil(root,INT_MIN,INT_MAX);
}


//third solution = do inorder traversal and keep check if you are getting elements in sorted order
