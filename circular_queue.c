#include<stdio.h>
#include<stdlib.h>
#define QSIZE 10
int count=0;
void insert_rear(int q[],int item, int *r)
{
    if(count==QSIZE)
    printf("queue overflow\n");
    else
{
    (*r)=(*r)+1;
    (*r)=(*r)%QSIZE;
        q[*r]=item;
        count++;
}
}
int  delete_front(int q[],int *f, int *r)
{
    int del_item;
        if(count==0)
        printf("queue underflow\n");
        else
        {
            del_item=q[*f];
            (*f)=(*f)+1;
            (*f)=(*f)%QSIZE;
            count--;
            return del_item;
        }
}
void display(int q[],int *f, int *r)
{
     int temp,i;
            temp=*f;
            if(count==0)
            {
                printf("queue is empty\n");
            }
            for(i=0;i<count;i++)
            {
                printf("%d",q[temp]);
                temp=(temp++)%QSIZE;
                
    }
}
void main()
{
    int q[QSIZE],item;
    int r=-1,f=0,ch,del_item;
    while(1)
    {
        printf("1.insert\n2.delete\n3.display\n");
        printf("enter your choice (1-3):");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("enter the item to be inserted \n");
            scanf("%d",&item);
            insert_rear(q,item,&r);
            break;
            case 2: del_item=delete_front(q,&f,&r);
            printf("%d item was deleted",del_item);
            break;
            case 3: display(q,&f,&r);
            break;
            default: printf("wrong choice");
            exit(0);
            break;
}
}
}
