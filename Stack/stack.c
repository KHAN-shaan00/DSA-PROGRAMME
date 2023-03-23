#include<stdio.h>
#include<conio.h>
#define size 5
int stack[size],top=-1;
int menu()
{
    int choice;
    printf("\nEnter your choice");
    printf("\nPress 1 : push");
    printf("\nPress 2 : pop");
    printf("\nPress 3 : display");
    printf("\nPress 4 : exit\n");
    scanf("%d",&choice);
    return choice;

}
void push(int item)

{
    if(top==size-1)
        printf("Stack is overflow\n");
    else
    {
        top++;
        stack[top]=item;
        printf("your item inserted\n");
    }
}
void pop()
{
    if(top==-1)
        printf("Stack is empty\n");
    else
    {
        printf("Deleted item is=%d",stack[top]);
        printf("\n");
        top--;
    }
}
void display()
{
    if(top==-1)
        printf("Stack is empty\n");
    else
    {
       for(int i=top;i>=0;i--)
         printf("\n%d",stack[i]);
    }
}
int main()
{
    int item;
    while(1)
    {
     switch(menu())
    {
    case 1:
         printf("Enter the number to insert\n");
         scanf("%d",&item);
         push(item);
         break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    case 4:
        exit(0);
    default:
        printf("Invalid Enter\n");
    }
    }

    getch();
  return 0;
}
