#include<stdio.h>
#include<stdlib.h>

/* depth of node=distance of node from the root of the tree;each link contributes one unit to the depth;
height of a node = number of edges in longest path from node to a leaf
complete binary tree=all levels are filled or all are as left as possible
perfect binary tree = all nodes have two children
balanced binary tree= diff between right and left subtree is not more than k(mostly 1)  */

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* newNode(int num)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=num;
    temp->right=temp->left=NULL;
    return(temp);
}

int main()
{
    struct node* root=newNode(1);//1 becomes the root
    root->left=newNode(2);//2 becomes the left child
    root->right=newNode(3);//3 becomes the right child
    getchar();
    return 0;

}
