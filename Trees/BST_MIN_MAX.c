#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


typedef struct BstNode
{
    int data;
    struct BstNode* left;
    struct BstNode* right;
}BstNode;

int FindMin(BstNode* root)
{//Go as left as possible
    if(root==NULL)
    {
        return -1;
    }
    while(root->left!=NULL)
    {
        root=root->left;
    }
    return root->data;
}

int FindMax(BstNode* root)
{
    if(root==NULL)
    {
        return -1;
    }
     while(root->right!=NULL)
    {
        root=root->right;
    }
    return root->data;
}


int FindMinRec(BstNode* root)
{
    if(root==NULL)
    {
        print("Error: Tree is empty\n");
        return -1;
    }
    else if(root->left==NULL)
    {
        return root->data;
    }
    return FindMinRec(root->left);
}

