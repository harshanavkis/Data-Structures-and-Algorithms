#include<iostream>
//#include "link_list.cpp"

using namespace std;


struct node
{
  int data;
  node* link;
};
void addatbeg(node**,int );
void display(node*);

int main()
{
node* head=NULL;//empty list
int n,num;
cout<<"How many numbers?? \n";
cin>>n;
cout<<"Enter the numbers";
for(int i=0;i<n;i++)
{
  cin>>num;
  addatbeg(&head,num);
}
display(head);
}


void addatbeg(node **headRef,int num)
{
  node* temp;
  temp->data=num;
  {temp->link=*headRef;
  *headRef=temp;
  }
}

void display(node* head)
  {
      node* temp=head;
      int i=0;
      while(temp->link!=NULL)
      {
          temp=temp->link;
          i++;
      }
  }

