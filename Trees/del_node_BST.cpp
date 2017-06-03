//while deleting the prop of the BST must be preserved
//leaf node removal is easy and the prop of BST is preserved
//also deletion of node with one child is easy
//CASE 3: node to be deleted has two children
// find minimum in right subtree and delete that node(first set node to be deleted as min value and then delete the original node)
//node with min value will not have a left child
//or choose max node in left sub tree

#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* Delete(Node* root,int data)
{
    if(root==NULL)
        return;
    else if(data<root->data)
    {
        root->left=Delete(root->left,data);
    }
    else if(data> root->data)
    {
        root->right=Delete(root->right,data);
    }
    //if data is equal to value at that node
    else
    {
        //Case 1: No child
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            root=NULL;
            return root;
        }
        //Case 2: One child
        else if(root->left==NULL)
        {
            Node* temp=root;
            root=root->right;
            delete temp;
            return root;
        }
        else if(root->right==NULL)
        {
            Node* temp=root;
            root=root->left;
            delete temp;
            return root;
        }
        //Case 3: 2 children present
        else
        {
            Node* temp=FindMin(root->right);
            root->data=temp->data;
            root->right=Delete(root->right,temp->data);
            return root;
        }
    }
}
