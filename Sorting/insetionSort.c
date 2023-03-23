#include<stdio.h>
#include<conio.h>
void insertion_sort(int a[],int size)
{
    int temp,i,j;
    for(i=1;i<size;i++)
    {
        temp=a[i];
        for(j=i-1;j>=0;j--)
        {
            if(a[j]>temp)
                a[j+1]=a[j];
            else
                break;

        }
        a[j+1]=temp;

    }
    for(i=0;i<size;i++)
        printf("%d  ",a[i]);
}
//void Display
int main()
{
    int a[5]={20,40,60,10,15};
    insertion_sort(a,5);
    getch();
}
