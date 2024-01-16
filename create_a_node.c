#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
  int data;
  struct node *link;
}node;

node* create_node(int a)
{
  node *temp;
  temp=malloc(sizeof(node));
  temp->data=a;
  temp->link=NULL;
  return temp;
}

void display(node *head)
{
  node *ptr;
  ptr=head;
  while(ptr!=NULL)
    {
      printf("%d",ptr->data);
      ptr=ptr->link;
    }
}

int count_node()
{
  node *ptr;
  ptr=head;
  int count=0;
  while(ptr!=NULL)
    {
      ptr=ptr->link;
      count++;
    }
  return count;
}

void insert_at_beginning(int x)
{
  node *temp;
  temp=malloc(sizeof(node));
  if(temp!=null) //because malloc only can return NULL or valid address
  {
    temp->data=x;
    temp->link=head;
    head=temp;
  }
}


void insertion_at_last()
{
  
}

int main ()
{
  node *head;
  
}
