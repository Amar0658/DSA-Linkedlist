#include<stdio.h>
#include <stdlib.h>
typedef struct node
{
  int data;
  struct node *link;
}node;

node *head=NULL;

node* create_node(int a)
{
  node *temp;
  temp = malloc(sizeof(node));
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
      printf("%d ",ptr->data);
      ptr=ptr->link;
    }
    free(ptr);
}

void count(node *head)
{
    int count=0;
    node *temp;
    temp=head;
    while(temp!=NULL)
    {
        temp=temp->link;
        count++;
    }
    printf("\nTotal number of nodes is %d.",count);
}

void insert_at_begn(int x)
{
    node *temp;
    temp = create_node(x);
    temp->link=head;
    head=temp;
}

void insert_at_last(int x)
{
    node *tp;
    tp=create_node(x);
    if(head==NULL)
    {
        head = tp;
        return;
    }
    node *last=head;
    while(last->link!=NULL)
    last=last->link;
    last->link=tp;
}

void print_last_node_data()
{
    if(head==NULL)
      return;
    node *temp=head;
    while(temp->link!=0)
    {
        temp=temp->link;
    }
    printf("\n%d",temp->data);
}

int program_to_search_key(int x)
{
    node *temp=head;
    while(temp!=NULL)
    {
        if(temp->data==x)
        return 1;
        temp=temp->link;
    }return 0;
}

int main ()
{
  head = create_node(4);
  head->link= create_node(5);
  head->link->link=create_node(6);
  insert_at_begn(3);
  insert_at_last(7);
  display(head);
  count(head);
  printf("\n%d",head->data);
  print_last_node_data();
  return 0;
}
