struct node
{
  int data;
  node* link;
};

#define NULL 0x0000

void createlist(node **headRef,int num)
{
  node* temp=new node();
  node* p=*headRef;
  while(p!=NULL)//to insert at the end of the list
  {
    p=p->link;
  }
  temp->data=num;
  temp->link=NULL;
  p->link=temp;
}

void addatbeg(node **headRef,int num)
{
  node* temp;
  temp->data=num;
  {temp->link=*headRef;
  *headRef=temp;void display(node* head)
  {
      node* temp=head;
      int i=0;
      while(temp->link!=NULL)
      {
          temp=temp->link;
          i++;
      }
  }

  }
}

