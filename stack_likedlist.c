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
NODE push(NODE first,int item)
{
	NODE new;
	new=getnode();
	new->data=item;
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
NODE pop(NODE first)
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
void main()
{
	int choice,item;
    NODE first=NULL;
	while(1)
	{
		printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
		printf("\nEnter your choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("\nEnter an item to be inserted:");
					scanf("%d",&item);
					first=push(first,item);
					break;
			case 2: first=pop(first);
					break;
			case 3: display(first);
					break;
			default: printf("\nwrong choice\n");
					 exit(0);
					 break;
		}
	}
}