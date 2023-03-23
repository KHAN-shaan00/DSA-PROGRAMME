#include<stdio.h>
#include<conio.h>
struct node
{
    struct node *prev;
    int item;
    struct node *next;

};
void add_item_last(struct node **s,int data)
{
    struct node *n,*t;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=data;
    n->next=NULL;
    if(*s==NULL)
    {
        n->prev=NULL;
        *s=n;
    }
    else{
        t=*s;
        while(t->next!=NULL)
            t=t->next;
        t->next=n;
        n->prev=t;
    }
}
void add_item_first(struct node **s,int data)
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=data;
    n->prev=NULL;
    n->next= *s;
    *s=n;

}
void delete_last_node(struct node **s)
{
    struct node *t1,*t2;
    if(*s==NULL)
        printf("List is empty");
    else
    {

        if((*s)->next==NULL)
            *s==NULL;
        else
        {
            t1=*s;
            t2==NULL;
            while(t1->next!=NULL)
            {
                t2=t1;
                t1=t1->next;
            }
            t2->next=NULL;
            free(t1);
        }
    }

}
void delete_first_node(struct node **s)
{
    if(*s==NULL)
        printf("List is empty");
    else
    {
        if((*s)->next==NULL)
            *s=NULL;
        else
        {
            (*s)=(*s)->next;
            (*s)->prev=NULL;
        }


    }
}
void printlist(struct node *start)
{
    while(start)
    {
        printf("%d",start->item);
        start=start->next;
        printf("\n");
    }
}

int main()
{
    struct node *start=NULL;
    //add_item_last(&start,12);
    //add_item_last(&start,25);
    //add_item_last(&start,25);
   //add_item_first(&start,10);
    //add_item_first(&start,5);
    //delete_last_node(&start);
    delete_first_node(&start);
    printlist(start);


}
