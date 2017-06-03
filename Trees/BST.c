/*BST search, insertion and deletion takes O(logn) in average case; Worst case avoided by using balanced binary tree*/
/*Def= for each node, value of nodes in left subtree is lesser and value of nodes in right subtree is greater*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


typedef struct BstNode
{
    int data;
    struct BstNode* left;
    struct BstNode* right;
}BstNode;

//BstNode* root;

BstNode* createNewNode(int num)
{
    BstNode* temp= (BstNode*)malloc(sizeof(BstNode));
    temp->data = num;
    temp->left=temp->right=NULL;
    return temp;
}

void InsertNode(BstNode** rootRef, int data)
{
    if(*rootRef==NULL)
    {
        *rootRef = createNewNode(data);
        return;
    }
    else if(data <= (*rootRef)->data)
    {
        InsertNode(&(*rootRef)->left,data);
        return;
    }
    InsertNode(&(*rootRef)->right,data);
    return;
}

bool Search(BstNode* root,int data)
{
    if(root==NULL)
    {
        return false;
    }
    else if(root->data==data)
    {
        return true;
    }
    else if(root->data <= data)
    {
        Search(root->left,data);
    }
    else if(root->data < data)
    {
        Search(root->right,data);
    }

}

int main()
{
    BstNode* root=NULL;
    int num;
    bool a;
    InsertNode(&root,15);
    InsertNode(&root,10);
    InsertNode(&root,20);
    printf("Enter number to be searched:");
    scanf("%d",&num);
    a=Search(root,num);
    printf("%d",a);
    return 0;
}
