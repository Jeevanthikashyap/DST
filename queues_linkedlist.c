#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node *NODE;
NODE getnode()
{
	NODE temp;
	temp=(NODE)malloc(sizeof(struct node));
	if(temp==NULL)
	{
		printf("Memory not allocated");
		return NULL;
	}
	return temp;
}
NODE insert(NODE first,int item)
{
	NODE new,last;
	new=getnode();
	new->data=item;
	new->next=NULL;
	if(first==NULL)
	{
		return new;
	}
	if(first==NULL)
	{
		first->next=new;
		return first;
	}
	last=first;
	while(last->next!=NULL)
	{
		last=last->next;
	}
	last->next=new;
	return first;
}
NODE delete(NODE first)
{
	NODE temp;
	if(first==NULL)
	{
		printf("list is empty\n");
		return first;
	}
	temp=first;
	temp=temp->next;
	printf("Item deleted =%d",first->data);
	free(first);
	return temp;
	
}
void display(NODE first)
{
	NODE temp;
	temp=first;
	if(first==NULL)
	{
		printf("List is empty\n");
	}
	while(temp!=NULL)
	{
		printf("Value stored in the node=%d\n",temp->data);
		temp=temp->next;
	}
	
}
void main()
{
	int choice,item;
    NODE first=NULL;
	while(1)
	{
		printf("\n1. Insert\n2. Delete\n3. Display\n");
		printf("\nEnter your choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("Enter item to be inserted :");
					scanf("%d",&item);
					first=insert(first,item);
					break;
			case 2: first=delete(first);
					break;
			case 3: display(first);
					break;
			default: printf("\nInvalid choice!!!");
					 exit(0);
					 break;
		}
	}
}