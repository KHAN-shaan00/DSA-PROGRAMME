#include<stdio.h>
struct smartarray
{
   int capacity;
   int lastindex;
   int *ptr;
};
int isempty(struct smartarray *arr)
 {
    if(arr->lastindex==-1)
        return 1;
    return 0;
 }
 int isfull(struct smartarray *arr)
 {
    if(arr->lastindex+1==arr->capacity)
        return 1;
    return 0;
 }
 int countitem(struct smartarray *arr)
 {
        return arr->lastindex+1;
 }
 void edititem(struct smartarray *arr,int index,int data)
{
     if(index<0 || index>arr->lastindex)
       printf("\ninvalid index");
      else
        arr->ptr[index]=data;
}
 void deleteitem(struct smartarray *arr,int index)
 {

    int i;
   if(index<0 || index>arr->lastindex)
     printf("invalid index");
   else
     {
         for(i=index;i<arr->lastindex;i++)
            arr->ptr[i]=arr->ptr[i+1];
         arr->lastindex-=1;
     }
 }
 int getitem(struct smartarray *arr,int index)
{
     if(index<0 || index>arr->lastindex)
     {
         printf("\n invalid index");
         return;
     }
     else
        return arr->ptr[index];
 }
  void insertitem(struct smartarray *arr,int index,int data)
 {
     int i;
     if(index<0 || index>arr->lastindex+1)
        printf("invalid index");
     else if(arr->lastindex+1==arr->capacity)
        printf("over flow");
     else
     {
      for(i=arr->lastindex;i>=index;i--)
           arr->ptr[i+1]=arr->ptr[i];
      arr->ptr[index]=data;
      arr->lastindex+=1;
     }
 }
 void appenditem(struct smartarray *arr,int data)
 {
     if(arr->lastindex+1==arr->capacity)
        printf("\n over flow");
     else
       {
         arr->lastindex+=1;
         arr->ptr[arr->lastindex]=data;
       }
 }
 struct smartarray* createarray(int cap)
 {
    struct smartarray *arr;
    arr=(struct smartarray*)malloc(sizeof(struct smartarray));
    arr->capacity=cap;
    arr->lastindex=-1;
    arr->ptr=(int*)malloc(sizeof(int)*cap);
    return arr;
 }
void printarray(struct smartarray *arr)
{
    int i;
    for(i=0;i<=arr->lastindex;i++)
        printf(" %d ",arr->ptr[i]);
}
void metadata(struct smartarray *arr)
{
    printf("\n total number of item %d : ",countitem(arr));
    printf("\n  is array empty %s" ,isempty(arr)?"yes":"No");
    printf("\n is array full %s " ,isfull(arr)?"yes":"No");
    printf("\n");
    printarray(arr);
    printf("\n");
}
int menu()
{
    int choice;
    printf("\n1 : append an item");
    printf("\n2 : insert an item");
    printf("\n3 : edit an item");
    printf("\n4 : delete an item");
    printf("\n5 : exit");
    printf("\nenter your choice");
    scanf("%d",&choice);
    return choice;

}

int main()
{
 int index,data;
 struct smartarray *arr;
 arr=createarray(10);
 while(1)
{
  system("cls");
  metadata(arr);
  switch(menu())
  {
  case 1:
      printf("\nenter the number to append");
      scanf("%d",&data);
      appenditem(arr,data);
      break;
  case 2:

      printf("\nenter the data  to insert");
      scanf("%d",&data);
      printf("\nenter the index  to insert");
      scanf("%d",&index);
      insertitem(arr,index,data);
      break;
   case 3:
      printf("\nenter the data  to edit");
      scanf("%d",&data);
      printf("\nenter the index to edit");
      scanf("%d",&index);
      edititem(arr,index,data);
      break;
   case 4:
      printf("\nenter the index  to delete");
      scanf("%d",&index);
      deleteitem(arr,index);
      break;
   case 5:
       exit((0));
   default:
       printf("\ninvalid choice");
  }
  getch();
}
 return 0;
}















