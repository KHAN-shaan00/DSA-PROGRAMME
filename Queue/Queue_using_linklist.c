#include <stdio.h>
#include <stdlib.h>
struct node
{
    int item;
    struct node *next;
}*front=NULL,*rear=NULL;
void enqueue(int data)
{
    struct node *t;
    t=(struct node*)malloc(sizeof(struct node));
    t->item=data;
    t->next=NULL;
    if(t==NULL)
        printf("Queue is full");
    else
    {
        if(front==NULL)
            front=rear=t;
        else
        {
            rear->next=t;
            rear=t;
        }

    }
}
int dequeue()
{
    int x=-1;
    struct node *t;
    if(front==NULL)
        printf("Queue is empty");
    else
    {
        t=front;
        x=front->item;
        front=front->next;
        free(t);
    }
    return x;
}
void display()
{
    struct node *t;
    t=front;
    while(t)
    {
        printf("%d",t->item);
        t=t->next;
    }
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printf("Deleted elements is %d\n",dequeue());
    display();
}
