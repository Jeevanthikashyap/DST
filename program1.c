#include<stdio.h>
#include<stdlib.h>
#define STACK_SIZE 5
int st[10],top,item;
top=-1;
void push()
{
if(top==STACK_SIZE)
printf("stack overflow\n");
else
{
top++;
st[top]=item;
}
}
int pop()
{
int del_item;
if(top==-1)
printf("stack underflow\n");
else
{
del_item=st[top];
top--;
return del_item;
}
}
void display()
{
int i;
if(top==-1)
printf("stack is empty\n");
for(i=0;i<=top;i++);
printf("%d\t",st[i]);
}
void main()
{
    int ch;
    while(1)
    {
        printf("1.push\n2.pop\n3.display\n");
        printf("enter your choice (1-3):");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("enter the item:");
            scanf("%d",&item);
            push();
            break;
            case 2: printf("%d item was deleted",pop());
            break;
            case 3: display();
            break;
            default: printf("wrong choice");
            exit(0);
            break;
            
        }
    }
}

        
    

