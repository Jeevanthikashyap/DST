#include<stdio.h>
#include<stdlib.h>
#define QSIZE 10
void insert_rear(int q[],int item, int *r)
{
    if(*r==QSIZE-1)
    printf("queue overflow\n");
    else
{
    (*r)++;
    q[*r]=item;
}
}
int  delete_front(int q[],int *f, int *r)
{
    if(*f>*r)
    printf("queue underflow\n");
    else

    return q[(*f)++];
}
void display(int q[],int *f, int *r)
{
    int i;
    if(*f>*r)
    printf("queue is empty\n");
    else
    {
        for(i=*f;i<=*r;i++)
        printf("%d",q[i]);
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




            