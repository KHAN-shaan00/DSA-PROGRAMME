#include<stdio.h>
#define size 5
int array[size],rear=-1,front=-1;
int main()
{
    enque(10);
    enque(20);
    //enque(30);
    //enque(40);
    //enque(50);
    //deque();
    //enque(60);
   // deque();
    //deque();
    //deque();
    //deque();
    //deque();
    display();

}

void enque(int data)
{
    if(front==0 && rear==size-1 || rear+1==front)
        printf("Queue is full");
    else if(front==-1)
    {
        front=rear=0;
        array[front]=data;
    }
    else if(rear==size-1)
    {
        rear=0;
        array[rear]=data;
    }
    else
    {
        rear=rear+1;
        array[rear]=data;
    }
}
void deque()
{
    if(front==-1)
        printf("Queue is empty");
    else if(front==rear)
        front=rear=-1;
    else if(front=size-1)
         front=0;
    //else if(front>0 && front<size-1)
    //    front=front+1;
    else
        front+=1;
        //front=0;
}
display()
{
    if(front==rear)
       printf("queue is empty");
    else
    {
         while(rear!=front)
         {
             printf("%d\n",front);
             front=(front+1)%size;
         }
    }

}
/*while(front!=rear)
{
   printf(" %d ",array[rear]);
}
    //for(int i=front;i<=rear;i++)
}*/
