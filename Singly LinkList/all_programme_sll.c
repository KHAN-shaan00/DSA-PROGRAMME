#include<stdio.h>
#include<conio.h>
struct node
{
    int item;
    struct node *next;
};

void addstartnode(struct node **s,int data)
{
    struct node *n;
    n=(struct node* )malloc(sizeof(struct node));
    n->item=data;
    n->next=*s;
    *s=n;
}
void addlastnode(struct node **s,int data)
{
    struct node *n ,*t;
    n=(struct node* )malloc(sizeof(struct node));
    n->item=data;
    n->next=NULL;
    if(*s==NULL)
        *s=n;
    else{
        while(t->next!=NULL)
            t=t->next;
        t->next=n;
    }

}
void deletefirst(struct node **s)
{
    struct node *t;
    if(*s==NULL)
        printf("List is empty");
    else{
        t=*s;
        *s=t->next;
        free(t);
    }
}
void reverse (struct node **s)
{
    struct node *prevnode,*currentnode,*nextnode;
    prevnode=NULL;
    currentnode=nextnode=*s;
    while(nextnode!=NULL)
    {
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }
    *s=prevnode;
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
void deletelastnode(struct node **s)
{
    struct node *t1,*t2;
    if(*s==NULL)
        printf("List is empty");
    else
    {
        if((*s)->next==NULL)
           *s=NULL;
        else
        {
         t1=NULL;
        t2=*s;
        while(t2->next!=NULL)
        {
            t1=t2;
            t2=t2->next;
        }
        t1->next=NULL;
        free(t2);
        }

    }
}
void searchElements(struct node *start)
{
    int x;
    printf("Enter a number for seaching");
    scanf("%d",&x);
    while(start->next!=NULL)
    {
        if(start->item==x)
        {
           printf("This item is present in link list");
            break;
        }
        start=start->next;
    }
    if(start->next==NULL)
    {
      printf("This item is not present in link list");
    }

}
int main()
{
   struct node *start=NULL;
   addstartnode(&start,110);
   addstartnode(&start,210);
   addlastnode(&start,400);
   addlastnode(&start,300);
  // deletefirst(&start);

   //deletelastnode(&start);
   //deletelastnode(&start);
   //deletelastnode(&start);
   reverse(&start);
   printlist(start);
   //searchElements(start);
   getch();
}
