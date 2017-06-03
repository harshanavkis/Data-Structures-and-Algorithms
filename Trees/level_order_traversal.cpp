//address of visited nodes is stored in a queue
//before dequeing the address of a node first enqueue the address of its children

#include<iostream>
#include<queue>
using namespace std;

struct Node
{
    char data;
    Node* left;
    Node* right;
};

void LevelOrder(Node* root)//print data in a tree in level order fashion
{
    if(root==NULL)
    {
        return;
    }
    queue<Node*> Q;
    Q.push(root);
    while(!Q.empty())
    {
        Node* current=Q.front();
        cout<<current->data<<" ";
        if(current->left != NULL) Q.push(current->left);
        if(current->right != NULL) Q.push(current->right);
        Q.pop();
    }

}
