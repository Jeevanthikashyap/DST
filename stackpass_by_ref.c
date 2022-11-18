#include<stdio.h>
#include<stdlib.h>
#define STACK_SIZE 10

void push(int st[],int *top, int item)
{
     if(*top==STACK_SIZE-1)
   printf("stack overflow\n");
else
{
   (*top)++;
   st[*top]=item;
}
}
int pop(int st[], int *top)
{
    int item_deleted;

    if(*top==-1)
        printf("stack underflow\n");
    
    else
    {
       item_deleted=st[*top];
        (*top)--;
       return item_deleted;
    }
}



void display(int st[], int *top)
{
int i;
if(*top==-1)
printf("stack is empty\n");
for(i=0;i<=*top;i++);
printf("%d\t",st[i]);
}
void main()
{
    int st[STACK_SIZE];
    int item, top=-1,ch,val_del;
    while(1)
    {
        printf("1.push\n2.pop\n3.display\n");
        printf("enter your choice (1-3):");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("enter the item to be inserted into the stack:\n");
            scanf("%d",&item);
            push(st,&top,item);
            break;
            case 2: val_del=pop(st,&top);
            printf("%d item was deleted",val_del);
            break;
            case 3: display(st,&top);
            break;
            default: printf("wrong choice");
            exit(0);
            break;
            
        }
    }
}
