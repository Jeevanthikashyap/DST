#include<stdio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node *next;
};
typedef struct node *NODE;

NODE getnode()
{
  NODE temp;
  temp=(NODE)malloc(sizeof(struct node));
  if(temp==NULL)
  {
  printf("memory not allocated\n");
  return NULL;
}
return temp;
}

NODE insert_at_begin(int item, NODE first)
{
    
    NODE new;
    new=getnode();
    new->value=item;
    new->next=NULL;

    if(first==NULL)
    {

    return new;
    }

else
{
new->next=first;
first=new;
return first;
}
}
NODE insert_at_end(int item, NODE first)
{
    NODE new,last;
    new=getnode();
    new->value=item;
    new->next=NULL;
if(first==NULL)
{
    return new;
}
if(first->next==NULL)
{
    first->next=new;
    return first;
}
last=first;
while(last->next!=NULL)
last=last->next;
return first;
}
NODE insert_pos(NODE first, int item, int pos)
{
    int count=1;
    int value=item;
    NODE new, current,prev;
    new=getnode();
    new->value=item;
    new->next=NULL;
    current=first;
    if(first==NULL && pos==1)
    return new;
    while(count!=pos && current!=NULL)
    {
        prev=current;
        current=current->next;
        count++;
    }
    if(count==pos)
    {
        prev->next=new;
        new->next=current;
        return first;
    }
    if(current==NULL)
    {
        printf("position not found\n");
        return first;
    }
    if(first!=NULL && pos==1)
    {
        first=insert_at_begin(first, value);
        return first;
    }
    }
void display(NODE first)
{
    NODE temp;
    temp=first;
    while(temp!=NULL)
    {
        printf("value stored in the node=%d\n",temp->value);
        temp=temp->next;
    }
}
int main()
{
    int choice, item,pos;
    NODE first=NULL;
    while(1)
    {
        printf("1.insert node at beginning\n2.insert node at end\n3.insert node at specific position\n4.display\n");
        printf("enter your choice: ");
        scanf("%d",&choice);

    switch(choice)
    {
        case 1:printf("enter the item to be inserted: ");
        scanf("%d",&item);
        first=insert_at_begin(item,first);
        break;
        case 2:printf("enter the item to be inserted: ");
        scanf("%d",&item);
        first=insert_at_end(item,first);
        break;
        case 3:printf("enter the item to be inserted: ");
        scanf("%d",&item);
        printf("enter the position to be inserted: ");
        scanf("%d",&pos);
        first=insert_pos(first,item,pos);
        break;
        case 4:display(first);
        break;
        default:printf("wrong choice");
        exit(0);

    }

    }

}

